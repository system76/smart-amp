//! TI TAS5825M register map
//! Documentation at https://www.ti.com/product/TAS5825M#tech-docs

use crate::i2c::I2CDev;

pub struct Tas5825m(I2CDev);

impl Tas5825m {
    pub fn new(i2c: I2CDev) -> Result<Self, String> {
        let mut amp = Self(i2c);
        amp.set_book(0)?;
        let die_id = amp.read_at(0x67)?;
        if die_id == 0x95 {
            Ok(amp)
        } else {
            Err(format!("DIE_ID 0x{:02X} does not match 0x95", die_id))
        }
    }

    pub fn read_at(&mut self, reg: u8) -> Result<u8, String> {
        self.0.read_at(reg)
    }

    pub fn write_at(&mut self, reg: u8, value: u8) -> Result<(), String> {
        self.0.write_at(reg, value)
    }

    pub fn write_block_at(&mut self, reg: u8, values: &[u8]) -> Result<(), String> {
        self.0.write_block_at(reg, values)
    }

    pub fn get_book(&mut self) -> Result<u8, String> {
        self.set_page(0x00)?;
        self.read_at(0x7F)
    }

    pub fn set_book(&mut self, book: u8) -> Result<(), String> {
        self.set_page(0x00)?;
        self.write_at(0x7F, book)
    }

    pub fn get_page(&mut self) -> Result<u8, String> {
        self.read_at(0x00)
    }

    pub fn set_page(&mut self, page: u8) -> Result<(), String> {
        self.write_at(0x00, page)
    }
}
