use smart_amp::{
    i2c::I2CDev,
    tas5825m::Tas5825m,
};
use std::{
    process,
};

fn dump_page(amp: &mut Tas5825m, book: u8, page: u8) -> Result<(), String> {
    println!("book {:02X}", book);
    amp.set_book(book)?;

    println!("  page {:02X}", page);
    amp.set_page(page)?;

    for reg in 0x00..=0x7f {
        println!("    {:02X} {:02X}", reg, amp.read_at(reg)?);
    }

    Ok(())
}

fn dump() -> Result<(), String> {
    //TODO: check DMI for safety
    let dev = I2CDev::new(0, 0x4e)?;
    let mut amp = Tas5825m::new(dev)?;

    dump_page(&mut amp, 0x00, 0x00)?;

    dump_page(&mut amp, 0x78, 0x01)?;

    for page in 0x01..=0x13 {
        dump_page(&mut amp, 0x8C, page)?;
    }

    for page in 0x01..=0x10 {
        dump_page(&mut amp, 0xAA, page)?;
    }

    Ok(())
}

fn main() {
    match dump() {
        Ok(()) => (),
        Err(err) => {
            eprintln!("smart-amp: {}", err);
            process::exit(1);
        }
    }
}

