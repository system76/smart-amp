// Extract smart-amp data from SmartAmpPei.efi

use std::{env, error, fs};

fn main() -> Result<(), Box<dyn error::Error>> {
    for arg in env::args().skip(1) {
        let data = fs::read(&arg)?;
        let mut i = 0;
        while i + 4 <= data.len() {
            // Find command to set page and book 0
            if &data[i..i + 4] == &[0x00, 0x00, 0x7F, 0x00] {
                break;
            }
            i += 1;
        }
        while let Some(reg) = data.get(i) {
            let Some(value) = data.get(i + 1) else { break };
            i += 2;
            println!();
            match reg {
                0x00 => {
                    if *value == 0 && data.get(i) == Some(&0x7F) {
                        let Some(book) = data.get(i + 1) else { break };
                        i += 2;
                        println!("res = tas5825m_set_book(dev, 0x{book:02X});");
                        println!("if (res < 0)\n\treturn res;");
                    } else {
                        println!("res = tas5825m_set_page(dev, 0x{value:02X});");
                        println!("if (res < 0)\n\treturn res;");
                    }
                }
                0x01..=0x7F => {
                    println!("res = tas5825m_write_at(dev, 0x{reg:02X}, 0x{value:02X});");
                    println!("if (res < 0)\n\treturn res;");
                }
                0xFD => {
                    let Some(block_reg) = data.get(i) else { break };
                    i += 1;

                    println!("{{");
                    println!("\tconst uint8_t values[] = {{");
                    for j in 0..(*value as usize) {
                        let Some(block_value) = data.get(i) else {
                            break;
                        };
                        i += 1;
                        if j % 8 == 0 {
                            if j > 0 {
                                println!(",");
                            }
                            print!("\t\t");
                        } else {
                            print!(", ");
                        }
                        print!("0x{block_value:02X}");
                    }
                    println!("\n\t}};");
                    println!("\tres = tas5825m_write_block_at(dev, 0x{block_reg:02X}, values, ARRAY_SIZE(values));");
                    println!("\tif (res < 0)\n\t\treturn res;");
                    println!("}}");
                }
                0xFE => {
                    println!("mdelay({value});");
                }
                _ => {
                    println!("UNKNOWN REGISTER 0x{reg:02X}, VALUE 0x{value:02X}");
                }
            }
        }
    }
    Ok(())
}
