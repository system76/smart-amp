amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_book(0x00)?;
amp.write_at(0x03, 0x02)?;
amp.write_at(0x01, 0x11)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_book(0x00)?;
amp.write_at(0x46, 0x11)?;
amp.set_page(0x00)?;
amp.write_at(0x02, 0x00)?;
amp.write_at(0x53, 0x01)?;
amp.write_at(0x54, 0x00)?;
amp.write_at(0x29, 0x7C)?;
amp.write_at(0x03, 0x02)?;
amp.write_at(0xFE, 0x05)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.write_at(0x29, 0x00)?;
amp.set_page(0x00)?;
amp.set_book(0x00)?;
amp.write_at(0x03, 0x12)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_book(0x00)?;
amp.write_at(0x48, 0x0C)?;
amp.set_page(0x00)?;
amp.set_book(0x64)?;
amp.set_page(0x01)?;
amp.write_block_at(0x08, &[0x00, 0xFE, 0x00, 0x40, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x50, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x82, 0x00, 0x93, 0x00, 0xFC, 0x00, 0x00, 0x8F, 0x00, 0xFF, 0xEF, 0x84, 0x49, 0x03, 0x27, 0x84, 0x02, 0x04, 0x06, 0x02, 0x60, 0x00, 0x01])?;
amp.set_page(0x02)?;
amp.write_block_at(0x08, &[0x02, 0x70, 0x00, 0x06, 0x02, 0x78, 0x00, 0x05, 0x02, 0x68, 0x00, 0x02, 0x02, 0x28, 0x03, 0x4D, 0x84, 0x2A, 0x04, 0x00, 0xE2, 0x57, 0x91, 0x9F, 0x84, 0x82, 0x20, 0xE0, 0x84, 0x82, 0x04, 0x01, 0xF0, 0x1C, 0x31, 0xA0, 0xF0, 0x1C, 0x31, 0xA1, 0xF0, 0x1C, 0x31, 0xA2, 0xF0, 0x1F, 0x31, 0xA3, 0xE4, 0x00, 0x11, 0xA6, 0x80, 0x27, 0x80, 0xE1, 0xF4, 0x00, 0x11, 0xA4, 0xF4, 0x1D, 0x31, 0xA5, 0xF4, 0x1C, 0x31, 0xA7, 0xF4, 0x1F, 0x31, 0xA8, 0x02, 0x78, 0x00, 0x03, 0xE2, 0x68, 0xF1, 0xC3, 0x80, 0x67, 0x80, 0xE9, 0x84, 0x4B, 0x03, 0x27, 0x02, 0x70, 0x00, 0x04, 0x84, 0x41, 0x03, 0x37, 0x80, 0x07, 0x00, 0x80, 0xE0, 0x00, 0x11, 0xA9, 0x84, 0x82, 0x00, 0xE0, 0x8E, 0xFC, 0x04, 0x10, 0xF0, 0x1C, 0x11, 0xAA, 0xF0, 0x1C, 0x11, 0xAB])?;
amp.set_page(0x03)?;
amp.write_block_at(0x08, &[0xF0, 0x1C, 0x11, 0xAC, 0xF0, 0x1F, 0x11, 0xAD, 0x86, 0xA1, 0x01, 0xC2, 0x80, 0x27, 0x80, 0xE8, 0x60, 0x00, 0x00, 0x00, 0x84, 0x43, 0x03, 0x37, 0x80, 0x00, 0x00, 0x81, 0x0D, 0x00, 0x10, 0x20, 0x84, 0x51, 0x03, 0x3E, 0x08, 0x44, 0x26, 0x30, 0x84, 0xC3, 0x03, 0x47, 0x84, 0xC2, 0x40, 0xE0, 0x8C, 0xFF, 0x03, 0x23, 0xE0, 0x10, 0x11, 0xB3, 0xF0, 0x1C, 0x51, 0xB4, 0xF0, 0x1C, 0x51, 0xB5, 0xF0, 0x1C, 0x51, 0xB6, 0xF0, 0x1F, 0x51, 0xB7, 0x86, 0xA1, 0x01, 0xC6, 0x80, 0x27, 0x80, 0xEA, 0x84, 0x53, 0x03, 0x3E, 0x84, 0x82, 0x04, 0x05, 0x84, 0x51, 0x03, 0x75, 0xE2, 0x6B, 0xC0, 0x00, 0x80, 0x07, 0x00, 0x80, 0xE0, 0x80, 0x31, 0xB8, 0x84, 0x82, 0x40, 0xE0, 0xF0, 0x1C, 0x51, 0xB9, 0xF0, 0x1C, 0x51, 0xBA, 0xF0, 0x1C, 0x51, 0xBB])?;
amp.set_page(0x04)?;
amp.write_block_at(0x08, &[0xF0, 0x1F, 0x51, 0xBC, 0x86, 0xA1, 0x01, 0xC5, 0x80, 0x27, 0x80, 0xEA, 0x60, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x81, 0x84, 0xA1, 0x03, 0x4F, 0xE0, 0x80, 0xA0, 0x00, 0x01, 0x07, 0x11, 0x20, 0x08, 0x44, 0x26, 0x30, 0x08, 0x00, 0x98, 0x4A, 0x84, 0x53, 0x03, 0x75, 0x08, 0x00, 0x30, 0x48, 0x02, 0xCA, 0x00, 0x01, 0x08, 0x60, 0x26, 0x32, 0x84, 0x51, 0x03, 0x45, 0xE4, 0x10, 0x40, 0x00, 0x80, 0x40, 0xC0, 0x82, 0x84, 0xC2, 0x40, 0xE0, 0x84, 0xC3, 0x03, 0x5E, 0x08, 0x00, 0x50, 0x48, 0xE0, 0x10, 0x11, 0xBD, 0x02, 0xC2, 0x00, 0x02, 0x08, 0x60, 0x06, 0x12, 0x84, 0xD3, 0x03, 0x4F, 0xF0, 0x1C, 0x51, 0xBE, 0xF0, 0x1C, 0x51, 0xBF, 0xF0, 0x1C, 0x51, 0xC0, 0xF0, 0x1F, 0x51, 0xC1, 0x84, 0xA1, 0x03, 0x65, 0x80, 0x27, 0x80, 0xEA])?;
amp.set_page(0x05)?;
amp.write_block_at(0x08, &[0xE0, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x83, 0x08, 0x00, 0x98, 0x6B, 0x08, 0x00, 0x30, 0x68, 0x84, 0x53, 0x03, 0x45, 0x08, 0x60, 0x26, 0x33, 0x84, 0x51, 0x03, 0x25, 0xE4, 0x10, 0x60, 0x00, 0x80, 0x40, 0xC0, 0x81, 0x02, 0x70, 0x00, 0x7F, 0x08, 0x00, 0x50, 0x28, 0x08, 0x60, 0x06, 0x11, 0x84, 0xCB, 0x03, 0x65, 0xE0, 0x10, 0x51, 0xC4, 0x84, 0x80, 0x41, 0x00, 0x02, 0xA3, 0x00, 0x10, 0xE4, 0x00, 0x00, 0x00, 0x84, 0xD0, 0x04, 0x01, 0x84, 0xA2, 0x04, 0x03, 0x84, 0xD2, 0x50, 0x01, 0x84, 0x53, 0x03, 0x25, 0x80, 0x00, 0xC4, 0x04, 0x8F, 0x30, 0x00, 0x00, 0x88, 0x67, 0x03, 0x00, 0xE4, 0x00, 0x11, 0x9B, 0xEE, 0x64, 0x60, 0x00, 0x02, 0xD3, 0x00, 0x10, 0x88, 0x47, 0x00, 0x80, 0x10, 0x00, 0x18, 0x02, 0x86, 0xC1, 0x01, 0x9D])?;
amp.set_page(0x06)?;
amp.write_block_at(0x08, &[0xE0, 0x10, 0x31, 0xC7, 0x86, 0xC9, 0x01, 0x9E, 0x80, 0x00, 0xC4, 0x02, 0x02, 0x50, 0x01, 0x9C, 0x00, 0xFF, 0x21, 0x65, 0x00, 0xFC, 0x00, 0x00, 0x02, 0x60, 0x00, 0x01, 0x02, 0x70, 0x00, 0x04, 0x84, 0xC8, 0x04, 0x10, 0x84, 0x41, 0x03, 0x67, 0x84, 0x51, 0x03, 0x6D, 0x84, 0xC0, 0x04, 0x02, 0x04, 0x80, 0x91, 0x20, 0x08, 0x60, 0x26, 0x30, 0x02, 0x78, 0x00, 0x03, 0x02, 0x68, 0x00, 0x02, 0x0D, 0x00, 0x10, 0x10, 0x08, 0x60, 0x06, 0x12, 0x84, 0x49, 0x03, 0x2F, 0xE0, 0x80, 0x71, 0xA9, 0x02, 0x28, 0x03, 0x55, 0x84, 0x82, 0x00, 0xE0, 0x84, 0x2A, 0x04, 0x00, 0xF0, 0x1C, 0x11, 0xAA, 0xF0, 0x1C, 0x11, 0xAB, 0xF0, 0x1C, 0x11, 0xAC, 0xF0, 0x1F, 0x11, 0xAD, 0x86, 0xA1, 0x01, 0xAE, 0x80, 0x27, 0x80, 0xE8, 0x84, 0x82, 0x04, 0x07])?;
amp.set_page(0x07)?;
amp.write_block_at(0x08, &[0xE0, 0x80, 0x60, 0x00, 0x84, 0x82, 0x40, 0xE0, 0x84, 0x43, 0x03, 0x67, 0xF0, 0x1C, 0x51, 0xAF, 0xF0, 0x1C, 0x51, 0xB0, 0xF0, 0x1C, 0x51, 0xB1, 0xF0, 0x1F, 0x51, 0xB2, 0x02, 0x78, 0x00, 0x05, 0x80, 0x27, 0x80, 0xEA, 0x84, 0x82, 0x04, 0x08, 0x02, 0x70, 0x00, 0x06, 0x84, 0x53, 0x03, 0x6D, 0x84, 0x80, 0x04, 0x07, 0xE0, 0x00, 0x00, 0x82, 0xF0, 0x81, 0x00, 0x80, 0x80, 0x07, 0x12, 0xBC, 0x86, 0xA1, 0x01, 0x9F, 0xE2, 0x57, 0xA0, 0x00, 0x84, 0x82, 0x04, 0x09, 0x84, 0x82, 0x20, 0xE0, 0xF0, 0x1C, 0x31, 0xA0, 0xF0, 0x1C, 0x31, 0xA1, 0xF0, 0x1C, 0x31, 0xA2, 0xF0, 0x1F, 0x31, 0xA3, 0xE4, 0x00, 0x11, 0xA6, 0x80, 0x27, 0x80, 0xE1, 0xF4, 0x00, 0x11, 0xA4, 0xF4, 0x1D, 0x31, 0xA5, 0xF4, 0x1C, 0x31, 0xA7, 0xF4, 0x1F, 0x31, 0xA8])?;
amp.set_page(0x08)?;
amp.write_block_at(0x08, &[0x02, 0x78, 0x00, 0x03, 0xE2, 0x6A, 0xF1, 0xC3, 0x80, 0x67, 0x80, 0xE9, 0x84, 0x4B, 0x03, 0x2F, 0x02, 0x70, 0x00, 0x04, 0x84, 0x59, 0x03, 0x3D, 0x80, 0x07, 0x00, 0x80, 0xE0, 0x00, 0x11, 0xA9, 0x84, 0x82, 0x60, 0xE0, 0x8E, 0xFC, 0x04, 0x10, 0xF0, 0x1C, 0x71, 0xAA, 0xF0, 0x1C, 0x71, 0xAB, 0xF0, 0x1C, 0x71, 0xAC, 0xF0, 0x1F, 0x71, 0xAD, 0x86, 0xA1, 0x01, 0xC2, 0x80, 0x27, 0x80, 0xEB, 0x60, 0x00, 0x00, 0x00, 0x84, 0x5B, 0x03, 0x3D, 0x80, 0x00, 0x00, 0x81, 0x0D, 0x00, 0x10, 0x20, 0x84, 0x59, 0x03, 0x3F, 0x08, 0x44, 0x26, 0x30, 0x84, 0xC3, 0x03, 0x57, 0x84, 0xC2, 0x60, 0xE0, 0xE0, 0x10, 0x11, 0xB3, 0xF0, 0x1C, 0x71, 0xB4, 0xF0, 0x1C, 0x71, 0xB5, 0xF0, 0x1C, 0x71, 0xB6, 0xF0, 0x1F, 0x71, 0xB7, 0x86, 0xA1, 0x01, 0xC6])?;
amp.set_page(0x09)?;
amp.write_block_at(0x08, &[0x80, 0x27, 0x80, 0xEB, 0x84, 0x5B, 0x03, 0x3F, 0x84, 0x82, 0x04, 0x0D, 0x84, 0x41, 0x03, 0x76, 0xE2, 0x6B, 0xE0, 0x00, 0x80, 0x07, 0x00, 0x80, 0xE0, 0x81, 0x31, 0xB8, 0x84, 0x82, 0x00, 0xE0, 0xF0, 0x1C, 0x11, 0xB9, 0xF0, 0x1C, 0x11, 0xBA, 0xF0, 0x1C, 0x11, 0xBB, 0xF0, 0x1F, 0x11, 0xBC, 0x86, 0xA1, 0x01, 0xC5, 0x80, 0x27, 0x80, 0xE8, 0x60, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x81, 0x84, 0xA1, 0x03, 0x5D, 0xE0, 0x81, 0xA0, 0x00, 0x01, 0x07, 0x11, 0x20, 0x08, 0x44, 0x26, 0x30, 0x08, 0x00, 0x98, 0x4A, 0x84, 0x43, 0x03, 0x76, 0x08, 0x00, 0x30, 0x48, 0x02, 0xCA, 0x00, 0x01, 0x08, 0x60, 0x26, 0x32, 0x84, 0x41, 0x03, 0x46, 0xE4, 0x10, 0x40, 0x00, 0x80, 0x40, 0xC0, 0x82, 0x84, 0xC2, 0x00, 0xE0, 0x84, 0xC3, 0x03, 0x5F])?;
amp.set_page(0x0A)?;
amp.write_block_at(0x08, &[0x08, 0x00, 0x50, 0x48, 0xE0, 0x10, 0x11, 0xBD, 0x02, 0xC2, 0x00, 0x02, 0x08, 0x60, 0x06, 0x12, 0x84, 0xD3, 0x03, 0x5D, 0xF0, 0x1C, 0x11, 0xBE, 0xF0, 0x1C, 0x11, 0xBF, 0xF0, 0x1C, 0x11, 0xC0, 0xF0, 0x1F, 0x11, 0xC1, 0x84, 0xA1, 0x03, 0x66, 0x80, 0x27, 0x80, 0xE8, 0xE0, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x83, 0x08, 0x00, 0x98, 0x6B, 0x08, 0x00, 0x30, 0x68, 0x84, 0x43, 0x03, 0x46, 0x08, 0x60, 0x26, 0x33, 0x84, 0x51, 0x03, 0x26, 0xE4, 0x10, 0x60, 0x00, 0x80, 0x40, 0xC0, 0x81, 0x02, 0x70, 0x00, 0x7F, 0x08, 0x00, 0x50, 0x28, 0x08, 0x60, 0x06, 0x11, 0x8C, 0xFF, 0x03, 0x24, 0x84, 0xCB, 0x03, 0x66, 0xE0, 0x10, 0x51, 0xC4, 0x84, 0x80, 0x41, 0x00, 0x02, 0xA3, 0x00, 0x10, 0xE4, 0x00, 0x00, 0x00, 0x84, 0xD0, 0x04, 0x09])?;
amp.set_page(0x0B)?;
amp.write_block_at(0x08, &[0x84, 0xA2, 0x04, 0x0B, 0x84, 0xD2, 0x50, 0x01, 0x84, 0x53, 0x03, 0x26, 0x80, 0x00, 0xC4, 0x0C, 0x8F, 0x30, 0x00, 0x00, 0x88, 0x67, 0x03, 0x00, 0xE4, 0x00, 0x11, 0x9B, 0xEE, 0x64, 0x80, 0x00, 0x02, 0xD3, 0x00, 0x10, 0x88, 0x47, 0x00, 0x80, 0x10, 0x00, 0x18, 0x02, 0x86, 0xC1, 0x01, 0x9D, 0xE0, 0x10, 0x31, 0xC7, 0x86, 0xC9, 0x01, 0x9E, 0x80, 0x00, 0xC4, 0x0A, 0x02, 0x50, 0x01, 0x9C, 0x00, 0xFF, 0x21, 0x65, 0x00, 0xFC, 0x00, 0x00, 0x02, 0x70, 0x00, 0x04, 0x02, 0x68, 0x00, 0x01, 0x02, 0x60, 0x00, 0x03, 0x02, 0x78, 0x00, 0x02, 0x84, 0x49, 0x03, 0x6E, 0x84, 0x41, 0x03, 0x6F, 0x84, 0xC8, 0x04, 0x10, 0x84, 0xC0, 0x04, 0x0A, 0x04, 0x81, 0x91, 0x20, 0x08, 0x60, 0x26, 0x30, 0x0D, 0x00, 0x10, 0x10, 0x08, 0x60, 0x06, 0x12])?;
amp.set_page(0x0C)?;
amp.write_block_at(0x08, &[0x84, 0x00, 0x04, 0x06, 0xE0, 0x81, 0x71, 0xA9, 0x84, 0x82, 0x20, 0xE8, 0xF0, 0x1D, 0x31, 0xAA, 0xF0, 0x1D, 0x31, 0xAB, 0xF0, 0x1D, 0x31, 0xAC, 0xF0, 0x1C, 0x31, 0xAD, 0x86, 0xA1, 0x01, 0xAE, 0x80, 0x27, 0x80, 0xF9, 0x84, 0x82, 0x04, 0x0E, 0xE0, 0x81, 0x60, 0x00, 0x84, 0x82, 0x00, 0xE8, 0x84, 0x4B, 0x03, 0x6E, 0xF0, 0x1D, 0x11, 0xAF, 0xF0, 0x1D, 0x11, 0xB0, 0xF0, 0x1D, 0x11, 0xB1, 0xF0, 0x1C, 0x11, 0xB2, 0x02, 0xA3, 0x00, 0x1A, 0x80, 0x27, 0x80, 0xF8, 0x84, 0x82, 0x04, 0x0F, 0xE0, 0x81, 0xC0, 0x00, 0xF0, 0x81, 0xE0, 0x80, 0x84, 0x43, 0x03, 0x6F, 0x80, 0x07, 0x12, 0xBD, 0x02, 0xC0, 0x00, 0x00, 0x00, 0xFC, 0x50, 0x00, 0x8F, 0x00, 0x00, 0x11, 0x8F, 0x00, 0xFF, 0xFF, 0x84, 0x58, 0x04, 0x01, 0x84, 0xC2, 0x04, 0x00])?;
amp.set_page(0x0D)?;
amp.write_block_at(0x08, &[0x02, 0xC2, 0x60, 0x00, 0x84, 0xA0, 0x61, 0x00, 0xE0, 0x20, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x40, 0x40, 0xA0, 0x00, 0x80, 0x00, 0xC0, 0x82, 0x08, 0xFC, 0x48, 0x3A, 0x08, 0xFC, 0x18, 0x50, 0x00, 0xFC, 0x00, 0x00, 0xE0, 0x10, 0x00, 0x00, 0x86, 0xA0, 0x41, 0x00, 0x40, 0x47, 0x20, 0x00, 0x80, 0x00, 0xC0, 0x83, 0x04, 0xE0, 0x3D, 0x1E, 0x04, 0x80, 0x11, 0xE0, 0x08, 0x44, 0x26, 0x33, 0x02, 0xCB, 0x00, 0x10, 0xE0, 0x10, 0x40, 0x83, 0x08, 0x00, 0x28, 0x21, 0x84, 0xCA, 0x61, 0x00, 0x80, 0x07, 0x00, 0x81, 0x0C, 0xE0, 0x2C, 0x09, 0x84, 0xCA, 0x21, 0x00, 0x00, 0xFC, 0x50, 0x00, 0x8F, 0x00, 0x00, 0x01])?;
amp.set_page(0x00)?;
amp.set_book(0x78)?;
amp.set_page(0x18)?;
amp.write_block_at(0x30, &[0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x00)?;
amp.set_book(0x78)?;
amp.set_page(0x1B)?;
amp.write_block_at(0x6C, &[0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x1C)?;
amp.write_block_at(0x08, &[0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x00)?;
amp.set_book(0x78)?;
amp.set_page(0x1C)?;
amp.write_block_at(0x1C, &[0x00, 0x00, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x00)?;
amp.set_book(0x78)?;
amp.set_page(0x1C)?;
amp.write_block_at(0x3C, &[0x00, 0x00, 0x03, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x00)?;
amp.set_book(0x78)?;
amp.set_page(0x1C)?;
amp.write_block_at(0x54, &[0x00, 0x00, 0x03, 0x40, 0x00, 0x00, 0x03, 0x48, 0x00, 0x00, 0x03, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x00)?;
amp.set_book(0x78)?;
amp.set_page(0x1C)?;
amp.write_block_at(0x74, &[0x00, 0x00, 0x03, 0x58, 0x00, 0x00, 0x03, 0x60, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x1D)?;
amp.write_block_at(0x08, &[0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x00)?;
amp.set_book(0x78)?;
amp.set_page(0x1D)?;
amp.write_block_at(0x1C, &[0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x00)?;
amp.set_book(0x78)?;
amp.set_page(0x1D)?;
amp.write_block_at(0x3C, &[0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x1E)?;
amp.write_block_at(0x08, &[0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x00)?;
amp.set_book(0x78)?;
amp.set_page(0x1E)?;
amp.write_block_at(0x0C, &[0x00, 0x00, 0x03, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x00)?;
amp.set_book(0x78)?;
amp.set_page(0x1E)?;
amp.write_block_at(0x24, &[0x00, 0x00, 0x03, 0x70, 0x00, 0x00, 0x03, 0x78, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x00)?;
amp.set_book(0x78)?;
amp.set_page(0x1E)?;
amp.write_block_at(0x44, &[0x00, 0x00, 0x04, 0x88, 0x00, 0x00, 0x04, 0x90])?;
amp.set_page(0x00)?;
amp.set_book(0x8C)?;
amp.set_page(0x0E)?;
amp.write_block_at(0x5C, &[0x00, 0xA7, 0x26, 0x4A, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x20, 0xC4, 0x9C, 0x00, 0x20, 0xC4, 0x9C, 0x00, 0x00, 0x68, 0xDB, 0x00, 0x00, 0xD1, 0xB7, 0x00, 0x00, 0x68, 0xDB, 0x0F, 0xA4, 0xA8, 0xC1, 0xF8, 0x59, 0x7F, 0x63])?;
amp.set_page(0x0F)?;
amp.write_block_at(0x08, &[0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 0xB7, 0xE9, 0x00, 0x5F, 0x6F, 0xD2, 0x00, 0x2F, 0xB7, 0xE9, 0x0B, 0x1E, 0x4F, 0x76, 0xFC, 0x23, 0x05, 0x54, 0xFA, 0x41, 0x20, 0x5C, 0x0B, 0x7D, 0xBF, 0x48, 0xFA, 0x41, 0x20, 0x5C, 0x0B, 0x1E, 0x4F, 0x76, 0xFC, 0x23, 0x05, 0x54, 0x00, 0x04, 0x81, 0x6F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x3F, 0xE5, 0xC9, 0xF8, 0xBB, 0x98, 0xC8, 0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x81, 0x6F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x3F, 0xE5, 0xC9, 0xF8, 0xBB, 0x98, 0xC8])?;
amp.set_page(0x10)?;
amp.write_block_at(0x08, &[0x00, 0x89, 0xA0, 0x27, 0x7F, 0xEC, 0x56, 0xD5, 0x7F, 0xFC, 0xB9, 0x23, 0x00, 0x89, 0xA0, 0x27, 0x7F, 0xEC, 0x56, 0xD5, 0x7F, 0xFC, 0xB9, 0x23])?;
amp.set_page(0x00)?;
amp.set_book(0x00)?;
amp.write_at(0x40, 0x00)?;
amp.set_page(0x00)?;
amp.set_book(0x00)?;
amp.write_block_at(0x7D, &[0x11, 0xFF])?;
amp.set_page(0x01)?;
amp.write_at(0x51, 0x05)?;
amp.set_page(0x02)?;
amp.write_at(0x19, 0xDF)?;
amp.set_page(0x00)?;
amp.set_book(0x8C)?;
amp.set_page(0x01)?;
amp.write_block_at(0x2C, &[0x00, 0x71, 0x94, 0x9A])?;
amp.set_page(0x0A)?;
amp.write_block_at(0x64, &[0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x0B)?;
amp.write_block_at(0x08, &[0x00, 0x80, 0x00, 0x00, 0x00, 0x2D, 0x6A, 0x86, 0x00, 0x2D, 0x6A, 0x86, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00])?;
amp.write_block_at(0x28, &[0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0x62, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x0E)?;
amp.write_block_at(0x5C, &[0x00, 0x03, 0x69, 0xC5, 0x00, 0xDE, 0x71, 0xB1, 0x00, 0x22, 0x1D, 0x95, 0x00, 0x03, 0x69, 0xC5])?;
amp.set_page(0x0F)?;
amp.write_block_at(0x5C, &[0x7F, 0xF9, 0x2C, 0x60, 0x02, 0x81, 0xE8, 0x8F])?;
amp.set_page(0x07)?;
amp.write_block_at(0x64, &[0x00, 0x80, 0x00, 0x00])?;
amp.write_block_at(0x6C, &[0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00])?;
amp.set_page(0x00)?;
amp.set_book(0xAA)?;
amp.set_page(0x01)?;
amp.write_block_at(0x30, &[0x07, 0xF5, 0xD6, 0xD3, 0xF0, 0x63, 0x93, 0xB0, 0x07, 0xA7, 0x5A, 0xBD, 0x0F, 0x9C, 0x6C, 0x50, 0xF8, 0x62, 0xCE, 0x70, 0x07, 0xF4, 0x31, 0x72, 0xF0, 0x73, 0x27, 0x53, 0x07, 0x98, 0xFE, 0x8B, 0x0F, 0x8C, 0xD8, 0xAD, 0xF8, 0x72, 0xD0, 0x02, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x02)?;
amp.write_block_at(0x08, &[0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x03)?;
amp.write_block_at(0x08, &[0x07, 0xE3, 0xCF, 0xE3, 0xF0, 0x38, 0x60, 0x3B, 0x07, 0xE3, 0xCF, 0xE3, 0x0F, 0xC7, 0x6A, 0x36, 0xF8, 0x38, 0x2A, 0xAB, 0x07, 0xEB, 0x43, 0x17, 0xF0, 0x29, 0x79, 0xD3, 0x07, 0xEB, 0x43, 0x17, 0x0F, 0xD6, 0x50, 0x6B, 0xF8, 0x29, 0x44, 0x10, 0x07, 0xF0, 0xED, 0x8D, 0xF0, 0x42, 0x66, 0x35, 0x07, 0xCD, 0xBB, 0x6F, 0x0F, 0xBD, 0x99, 0xCB, 0xF8, 0x41, 0x57, 0x04, 0x08, 0x19, 0xA4, 0x18, 0xF0, 0x0F, 0xF2, 0xD6, 0x07, 0xD7, 0x7B, 0xA8, 0x0F, 0xF0, 0x60, 0x5B, 0xF8, 0x0F, 0x33, 0x70, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x04)?;
amp.write_block_at(0x08, &[0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x05)?;
amp.write_block_at(0x08, &[0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE3, 0xCF, 0xE3, 0xF0, 0x38, 0x60, 0x3B, 0x07, 0xE3, 0xCF, 0xE3, 0x0F, 0xC7, 0x6A, 0x36, 0xF8, 0x38, 0x2A, 0xAB, 0x07, 0xEB, 0x43, 0x17, 0xF0, 0x29, 0x79, 0xD3, 0x07, 0xEB, 0x43, 0x17, 0x0F, 0xD6, 0x50, 0x6B, 0xF8, 0x29, 0x44, 0x10, 0x07, 0xF0, 0xED, 0x8D, 0xF0, 0x42, 0x66, 0x35, 0x07, 0xCD, 0xBB, 0x6F, 0x0F, 0xBD, 0x99, 0xCB, 0xF8, 0x41, 0x57, 0x04])?;
amp.set_page(0x06)?;
amp.write_block_at(0x08, &[0x08, 0x19, 0xA4, 0x18, 0xF0, 0x0F, 0xF2, 0xD6, 0x07, 0xD7, 0x7B, 0xA8, 0x0F, 0xF0, 0x60, 0x5B, 0xF8, 0x0F, 0x33, 0x70, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])?;
amp.set_page(0x0E)?;
amp.write_block_at(0x6C, &[0x00, 0x87, 0x5E, 0xC2, 0xFF, 0x02, 0xC8, 0x72, 0x00, 0x76, 0xEA, 0x00, 0x0F, 0xDB, 0x79, 0xE0, 0xF8, 0x23, 0x74, 0xEC])?;
amp.set_page(0x0F)?;
amp.write_block_at(0x08, &[0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF4, 0x49, 0x81, 0xFF, 0xE8, 0x93, 0x02, 0xFF, 0xF4, 0x49, 0x81, 0x0D, 0x94, 0x7A, 0x64, 0xFA, 0x3C, 0xAB, 0xA1, 0x06, 0xD5, 0xF3, 0xB1, 0xF2, 0x54, 0x18, 0x9F, 0x06, 0xD5, 0xF3, 0xB1, 0x0D, 0x94, 0x7A, 0x64, 0xFA, 0x3C, 0xAB, 0xA1, 0x00, 0x00, 0x38, 0xE4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xD5, 0x55, 0x55, 0xF8, 0x2A, 0x71, 0xC7])?;
amp.set_page(0x00)?;
amp.set_book(0x00)?;
amp.write_at(0x30, 0x00)?;
amp.write_at(0x60, 0x02)?;
amp.write_at(0x62, 0x09)?;
amp.write_at(0x4C, 0x30)?;
amp.set_page(0x00)?;
amp.set_book(0x00)?;
amp.write_at(0x4E, 0xBB)?;
amp.write_at(0x4F, 0xB0)?;
amp.set_page(0x00)?;
amp.set_book(0x00)?;
amp.write_at(0x03, 0x0F)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_page(0x00)?;
amp.set_book(0x00)?;
amp.set_page(0x00)?;
amp.write_at(0x78, 0x80)?;
amp.write_at(0x02, 0x01)?;
amp.write_at(0x6B, 0x03)?;
amp.write_at(0x6C, 0x03)?;
amp.write_at(0x03, 0x03)?;
