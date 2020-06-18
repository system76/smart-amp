#[cfg(target_os = "linux")]
#[path = "i2c/linux.rs"]
pub mod i2c;

pub mod tas5825m;
