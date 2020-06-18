use i2cdev::{
    core::I2CDevice,
    linux::LinuxI2CDevice,
};

pub struct I2CDev(LinuxI2CDevice);

impl I2CDev {
    pub fn new(bus: u8, addr: u8) -> Result<Self, String> {
        LinuxI2CDevice::new(&format!("/dev/i2c-{}", bus), addr as u16)
            .map(Self)
            .map_err(|err| format!("{}\n{:#?}", err, err))
    }

    pub fn read_at(&mut self, reg: u8) -> Result<u8, String> {
        self.0.smbus_read_byte_data(reg)
            .map_err(|err| format!("{}\n{:#?}", err, err))
    }

    pub fn write_at(&mut self, reg: u8, value: u8) -> Result<(), String> {
        self.0.smbus_write_byte_data(reg, value)
            .map_err(|err| format!("{}\n{:#?}", err, err))
    }
}
