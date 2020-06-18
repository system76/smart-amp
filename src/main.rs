use smart_amp::{
    i2c::I2CDev,
    tas5825m::Tas5825m,
};
use std::{
    process,
};

fn dump() -> Result<(), String> {
    let mut dev = I2CDev::new(0, 0x4e)?;
    println!("{:02X}", dev.read_at(0x67)?);
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

