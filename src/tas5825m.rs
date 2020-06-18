//! TI TAS5825M register map
//! Documentation at https://www.ti.com/product/TAS5825M#tech-docs

use crate::i2c::I2CDev;

pub struct Tas5825m {
    i2c: I2CDev
}

impl Tas5825m {
    pub fn new(i2c: I2CDev) -> Self {
        Self { i2c }
    }
}
