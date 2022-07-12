/* SPDX-License-Identifier: GPL-2.0-only */

#include <drivers/i2c/tas5825m/tas5825m.h>

int tas5825m_setup(struct device *dev, int id)
{
	int res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x60, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x63, 0x03);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x64, 0x03);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x03, 0x02);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x01, 0x11);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x46, 0x11);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x02, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x53, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x54, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x29, 0x7C);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x03, 0x02);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x29, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x03, 0x12);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x48, 0x0C);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x64);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x01);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0xFE, 0x00, 0x40, 0x00, 0xFC, 0x00, 0x00,
			0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
			0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
			0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
			0x00, 0xFC, 0x50, 0x00, 0x00, 0xFC, 0x00, 0x00,
			0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
			0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
			0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
			0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
			0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
			0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
			0x00, 0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
			0x00, 0x82, 0x00, 0x93, 0x00, 0xFC, 0x00, 0x00,
			0x8F, 0x00, 0xFF, 0xEF, 0x84, 0x49, 0x03, 0x27,
			0x84, 0x02, 0x04, 0x06, 0x02, 0x60, 0x00, 0x01,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x02);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x02, 0x70, 0x00, 0x06, 0x02, 0x78, 0x00, 0x05,
			0x02, 0x68, 0x00, 0x02, 0x02, 0x28, 0x03, 0x4D,
			0x84, 0x2A, 0x04, 0x00, 0xE2, 0x57, 0x91, 0x9F,
			0x84, 0x82, 0x20, 0xE0, 0x84, 0x82, 0x04, 0x01,
			0xF0, 0x1C, 0x31, 0xA0, 0xF0, 0x1C, 0x31, 0xA1,
			0xF0, 0x1C, 0x31, 0xA2, 0xF0, 0x1F, 0x31, 0xA3,
			0xE4, 0x00, 0x11, 0xA6, 0x80, 0x27, 0x80, 0xE1,
			0xF4, 0x00, 0x11, 0xA4, 0xF4, 0x1D, 0x31, 0xA5,
			0xF4, 0x1C, 0x31, 0xA7, 0xF4, 0x1F, 0x31, 0xA8,
			0x02, 0x78, 0x00, 0x03, 0xE2, 0x68, 0xF1, 0xC3,
			0x80, 0x67, 0x80, 0xE9, 0x84, 0x4B, 0x03, 0x27,
			0x02, 0x70, 0x00, 0x04, 0x84, 0x41, 0x03, 0x37,
			0x80, 0x07, 0x00, 0x80, 0xE0, 0x00, 0x11, 0xA9,
			0x84, 0x82, 0x00, 0xE0, 0x8E, 0xFC, 0x04, 0x10,
			0xF0, 0x1C, 0x11, 0xAA, 0xF0, 0x1C, 0x11, 0xAB,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x03);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0xF0, 0x1C, 0x11, 0xAC, 0xF0, 0x1F, 0x11, 0xAD,
			0x86, 0xA1, 0x01, 0xC2, 0x80, 0x27, 0x80, 0xE8,
			0x60, 0x00, 0x00, 0x00, 0x84, 0x43, 0x03, 0x37,
			0x80, 0x00, 0x00, 0x81, 0x0D, 0x00, 0x10, 0x20,
			0x84, 0x51, 0x03, 0x3E, 0x08, 0x44, 0x26, 0x30,
			0x84, 0xC3, 0x03, 0x47, 0x84, 0xC2, 0x40, 0xE0,
			0x8C, 0xFF, 0x03, 0x23, 0xE0, 0x10, 0x11, 0xB3,
			0xF0, 0x1C, 0x51, 0xB4, 0xF0, 0x1C, 0x51, 0xB5,
			0xF0, 0x1C, 0x51, 0xB6, 0xF0, 0x1F, 0x51, 0xB7,
			0x86, 0xA1, 0x01, 0xC6, 0x80, 0x27, 0x80, 0xEA,
			0x84, 0x53, 0x03, 0x3E, 0x84, 0x82, 0x04, 0x05,
			0x84, 0x51, 0x03, 0x75, 0xE2, 0x6B, 0xC0, 0x00,
			0x80, 0x07, 0x00, 0x80, 0xE0, 0x80, 0x31, 0xB8,
			0x84, 0x82, 0x40, 0xE0, 0xF0, 0x1C, 0x51, 0xB9,
			0xF0, 0x1C, 0x51, 0xBA, 0xF0, 0x1C, 0x51, 0xBB,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x04);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0xF0, 0x1F, 0x51, 0xBC, 0x86, 0xA1, 0x01, 0xC5,
			0x80, 0x27, 0x80, 0xEA, 0x60, 0x00, 0x00, 0x00,
			0x80, 0x00, 0x00, 0x81, 0x84, 0xA1, 0x03, 0x4F,
			0xE0, 0x80, 0xA0, 0x00, 0x01, 0x07, 0x11, 0x20,
			0x08, 0x44, 0x26, 0x30, 0x08, 0x00, 0x98, 0x4A,
			0x84, 0x53, 0x03, 0x75, 0x08, 0x00, 0x30, 0x48,
			0x02, 0xCA, 0x00, 0x01, 0x08, 0x60, 0x26, 0x32,
			0x84, 0x51, 0x03, 0x45, 0xE4, 0x10, 0x40, 0x00,
			0x80, 0x40, 0xC0, 0x82, 0x84, 0xC2, 0x40, 0xE0,
			0x84, 0xC3, 0x03, 0x5E, 0x08, 0x00, 0x50, 0x48,
			0xE0, 0x10, 0x11, 0xBD, 0x02, 0xC2, 0x00, 0x02,
			0x08, 0x60, 0x06, 0x12, 0x84, 0xD3, 0x03, 0x4F,
			0xF0, 0x1C, 0x51, 0xBE, 0xF0, 0x1C, 0x51, 0xBF,
			0xF0, 0x1C, 0x51, 0xC0, 0xF0, 0x1F, 0x51, 0xC1,
			0x84, 0xA1, 0x03, 0x65, 0x80, 0x27, 0x80, 0xEA,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x05);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0xE0, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x83,
			0x08, 0x00, 0x98, 0x6B, 0x08, 0x00, 0x30, 0x68,
			0x84, 0x53, 0x03, 0x45, 0x08, 0x60, 0x26, 0x33,
			0x84, 0x51, 0x03, 0x25, 0xE4, 0x10, 0x60, 0x00,
			0x80, 0x40, 0xC0, 0x81, 0x02, 0x70, 0x00, 0x7F,
			0x08, 0x00, 0x50, 0x28, 0x08, 0x60, 0x06, 0x11,
			0x84, 0xCB, 0x03, 0x65, 0xE0, 0x10, 0x51, 0xC4,
			0x84, 0x80, 0x41, 0x00, 0x02, 0xA3, 0x00, 0x10,
			0xE4, 0x00, 0x00, 0x00, 0x84, 0xD0, 0x04, 0x01,
			0x84, 0xA2, 0x04, 0x03, 0x84, 0xD2, 0x50, 0x01,
			0x84, 0x53, 0x03, 0x25, 0x80, 0x00, 0xC4, 0x04,
			0x8F, 0x30, 0x00, 0x00, 0x88, 0x67, 0x03, 0x00,
			0xE4, 0x00, 0x11, 0x9B, 0xEE, 0x64, 0x60, 0x00,
			0x02, 0xD3, 0x00, 0x10, 0x88, 0x47, 0x00, 0x80,
			0x10, 0x00, 0x18, 0x02, 0x86, 0xC1, 0x01, 0x9D,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x06);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0xE0, 0x10, 0x31, 0xC7, 0x86, 0xC9, 0x01, 0x9E,
			0x80, 0x00, 0xC4, 0x02, 0x02, 0x50, 0x01, 0x9C,
			0x00, 0xFF, 0x21, 0x65, 0x00, 0xFC, 0x00, 0x00,
			0x02, 0x60, 0x00, 0x01, 0x02, 0x70, 0x00, 0x04,
			0x84, 0xC8, 0x04, 0x10, 0x84, 0x41, 0x03, 0x67,
			0x84, 0x51, 0x03, 0x6D, 0x84, 0xC0, 0x04, 0x02,
			0x04, 0x80, 0x91, 0x20, 0x08, 0x60, 0x26, 0x30,
			0x02, 0x78, 0x00, 0x03, 0x02, 0x68, 0x00, 0x02,
			0x0D, 0x00, 0x10, 0x10, 0x08, 0x60, 0x06, 0x12,
			0x84, 0x49, 0x03, 0x2F, 0xE0, 0x80, 0x71, 0xA9,
			0x02, 0x28, 0x03, 0x55, 0x84, 0x82, 0x00, 0xE0,
			0x84, 0x2A, 0x04, 0x00, 0xF0, 0x1C, 0x11, 0xAA,
			0xF0, 0x1C, 0x11, 0xAB, 0xF0, 0x1C, 0x11, 0xAC,
			0xF0, 0x1F, 0x11, 0xAD, 0x86, 0xA1, 0x01, 0xAE,
			0x80, 0x27, 0x80, 0xE8, 0x84, 0x82, 0x04, 0x07,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x07);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0xE0, 0x80, 0x60, 0x00, 0x84, 0x82, 0x40, 0xE0,
			0x84, 0x43, 0x03, 0x67, 0xF0, 0x1C, 0x51, 0xAF,
			0xF0, 0x1C, 0x51, 0xB0, 0xF0, 0x1C, 0x51, 0xB1,
			0xF0, 0x1F, 0x51, 0xB2, 0x02, 0x78, 0x00, 0x05,
			0x80, 0x27, 0x80, 0xEA, 0x84, 0x82, 0x04, 0x08,
			0x02, 0x70, 0x00, 0x06, 0x84, 0x53, 0x03, 0x6D,
			0x84, 0x80, 0x04, 0x07, 0xE0, 0x00, 0x00, 0x82,
			0xF0, 0x81, 0x00, 0x80, 0x80, 0x07, 0x12, 0xBC,
			0x86, 0xA1, 0x01, 0x9F, 0xE2, 0x57, 0xA0, 0x00,
			0x84, 0x82, 0x04, 0x09, 0x84, 0x82, 0x20, 0xE0,
			0xF0, 0x1C, 0x31, 0xA0, 0xF0, 0x1C, 0x31, 0xA1,
			0xF0, 0x1C, 0x31, 0xA2, 0xF0, 0x1F, 0x31, 0xA3,
			0xE4, 0x00, 0x11, 0xA6, 0x80, 0x27, 0x80, 0xE1,
			0xF4, 0x00, 0x11, 0xA4, 0xF4, 0x1D, 0x31, 0xA5,
			0xF4, 0x1C, 0x31, 0xA7, 0xF4, 0x1F, 0x31, 0xA8,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x08);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x02, 0x78, 0x00, 0x03, 0xE2, 0x6A, 0xF1, 0xC3,
			0x80, 0x67, 0x80, 0xE9, 0x84, 0x4B, 0x03, 0x2F,
			0x02, 0x70, 0x00, 0x04, 0x84, 0x59, 0x03, 0x3D,
			0x80, 0x07, 0x00, 0x80, 0xE0, 0x00, 0x11, 0xA9,
			0x84, 0x82, 0x60, 0xE0, 0x8E, 0xFC, 0x04, 0x10,
			0xF0, 0x1C, 0x71, 0xAA, 0xF0, 0x1C, 0x71, 0xAB,
			0xF0, 0x1C, 0x71, 0xAC, 0xF0, 0x1F, 0x71, 0xAD,
			0x86, 0xA1, 0x01, 0xC2, 0x80, 0x27, 0x80, 0xEB,
			0x60, 0x00, 0x00, 0x00, 0x84, 0x5B, 0x03, 0x3D,
			0x80, 0x00, 0x00, 0x81, 0x0D, 0x00, 0x10, 0x20,
			0x84, 0x59, 0x03, 0x3F, 0x08, 0x44, 0x26, 0x30,
			0x84, 0xC3, 0x03, 0x57, 0x84, 0xC2, 0x60, 0xE0,
			0xE0, 0x10, 0x11, 0xB3, 0xF0, 0x1C, 0x71, 0xB4,
			0xF0, 0x1C, 0x71, 0xB5, 0xF0, 0x1C, 0x71, 0xB6,
			0xF0, 0x1F, 0x71, 0xB7, 0x86, 0xA1, 0x01, 0xC6,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x09);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x80, 0x27, 0x80, 0xEB, 0x84, 0x5B, 0x03, 0x3F,
			0x84, 0x82, 0x04, 0x0D, 0x84, 0x41, 0x03, 0x76,
			0xE2, 0x6B, 0xE0, 0x00, 0x80, 0x07, 0x00, 0x80,
			0xE0, 0x81, 0x31, 0xB8, 0x84, 0x82, 0x00, 0xE0,
			0xF0, 0x1C, 0x11, 0xB9, 0xF0, 0x1C, 0x11, 0xBA,
			0xF0, 0x1C, 0x11, 0xBB, 0xF0, 0x1F, 0x11, 0xBC,
			0x86, 0xA1, 0x01, 0xC5, 0x80, 0x27, 0x80, 0xE8,
			0x60, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x81,
			0x84, 0xA1, 0x03, 0x5D, 0xE0, 0x81, 0xA0, 0x00,
			0x01, 0x07, 0x11, 0x20, 0x08, 0x44, 0x26, 0x30,
			0x08, 0x00, 0x98, 0x4A, 0x84, 0x43, 0x03, 0x76,
			0x08, 0x00, 0x30, 0x48, 0x02, 0xCA, 0x00, 0x01,
			0x08, 0x60, 0x26, 0x32, 0x84, 0x41, 0x03, 0x46,
			0xE4, 0x10, 0x40, 0x00, 0x80, 0x40, 0xC0, 0x82,
			0x84, 0xC2, 0x00, 0xE0, 0x84, 0xC3, 0x03, 0x5F,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x0A);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x08, 0x00, 0x50, 0x48, 0xE0, 0x10, 0x11, 0xBD,
			0x02, 0xC2, 0x00, 0x02, 0x08, 0x60, 0x06, 0x12,
			0x84, 0xD3, 0x03, 0x5D, 0xF0, 0x1C, 0x11, 0xBE,
			0xF0, 0x1C, 0x11, 0xBF, 0xF0, 0x1C, 0x11, 0xC0,
			0xF0, 0x1F, 0x11, 0xC1, 0x84, 0xA1, 0x03, 0x66,
			0x80, 0x27, 0x80, 0xE8, 0xE0, 0x00, 0x00, 0x00,
			0x80, 0x07, 0x00, 0x83, 0x08, 0x00, 0x98, 0x6B,
			0x08, 0x00, 0x30, 0x68, 0x84, 0x43, 0x03, 0x46,
			0x08, 0x60, 0x26, 0x33, 0x84, 0x51, 0x03, 0x26,
			0xE4, 0x10, 0x60, 0x00, 0x80, 0x40, 0xC0, 0x81,
			0x02, 0x70, 0x00, 0x7F, 0x08, 0x00, 0x50, 0x28,
			0x08, 0x60, 0x06, 0x11, 0x8C, 0xFF, 0x03, 0x24,
			0x84, 0xCB, 0x03, 0x66, 0xE0, 0x10, 0x51, 0xC4,
			0x84, 0x80, 0x41, 0x00, 0x02, 0xA3, 0x00, 0x10,
			0xE4, 0x00, 0x00, 0x00, 0x84, 0xD0, 0x04, 0x09,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x0B);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x84, 0xA2, 0x04, 0x0B, 0x84, 0xD2, 0x50, 0x01,
			0x84, 0x53, 0x03, 0x26, 0x80, 0x00, 0xC4, 0x0C,
			0x8F, 0x30, 0x00, 0x00, 0x88, 0x67, 0x03, 0x00,
			0xE4, 0x00, 0x11, 0x9B, 0xEE, 0x64, 0x80, 0x00,
			0x02, 0xD3, 0x00, 0x10, 0x88, 0x47, 0x00, 0x80,
			0x10, 0x00, 0x18, 0x02, 0x86, 0xC1, 0x01, 0x9D,
			0xE0, 0x10, 0x31, 0xC7, 0x86, 0xC9, 0x01, 0x9E,
			0x80, 0x00, 0xC4, 0x0A, 0x02, 0x50, 0x01, 0x9C,
			0x00, 0xFF, 0x21, 0x65, 0x00, 0xFC, 0x00, 0x00,
			0x02, 0x70, 0x00, 0x04, 0x02, 0x68, 0x00, 0x01,
			0x02, 0x60, 0x00, 0x03, 0x02, 0x78, 0x00, 0x02,
			0x84, 0x49, 0x03, 0x6E, 0x84, 0x41, 0x03, 0x6F,
			0x84, 0xC8, 0x04, 0x10, 0x84, 0xC0, 0x04, 0x0A,
			0x04, 0x81, 0x91, 0x20, 0x08, 0x60, 0x26, 0x30,
			0x0D, 0x00, 0x10, 0x10, 0x08, 0x60, 0x06, 0x12,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x0C);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x84, 0x00, 0x04, 0x06, 0xE0, 0x81, 0x71, 0xA9,
			0x84, 0x82, 0x20, 0xE8, 0xF0, 0x1D, 0x31, 0xAA,
			0xF0, 0x1D, 0x31, 0xAB, 0xF0, 0x1D, 0x31, 0xAC,
			0xF0, 0x1C, 0x31, 0xAD, 0x86, 0xA1, 0x01, 0xAE,
			0x80, 0x27, 0x80, 0xF9, 0x84, 0x82, 0x04, 0x0E,
			0xE0, 0x81, 0x60, 0x00, 0x84, 0x82, 0x00, 0xE8,
			0x84, 0x4B, 0x03, 0x6E, 0xF0, 0x1D, 0x11, 0xAF,
			0xF0, 0x1D, 0x11, 0xB0, 0xF0, 0x1D, 0x11, 0xB1,
			0xF0, 0x1C, 0x11, 0xB2, 0x02, 0xA3, 0x00, 0x1A,
			0x80, 0x27, 0x80, 0xF8, 0x84, 0x82, 0x04, 0x0F,
			0xE0, 0x81, 0xC0, 0x00, 0xF0, 0x81, 0xE0, 0x80,
			0x84, 0x43, 0x03, 0x6F, 0x80, 0x07, 0x12, 0xBD,
			0x02, 0xC0, 0x00, 0x00, 0x00, 0xFC, 0x50, 0x00,
			0x8F, 0x00, 0x00, 0x11, 0x8F, 0x00, 0xFF, 0xFF,
			0x84, 0x58, 0x04, 0x01, 0x84, 0xC2, 0x04, 0x00,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x0D);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x02, 0xC2, 0x60, 0x00, 0x84, 0xA0, 0x61, 0x00,
			0xE0, 0x20, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
			0x40, 0x40, 0xA0, 0x00, 0x80, 0x00, 0xC0, 0x82,
			0x08, 0xFC, 0x48, 0x3A, 0x08, 0xFC, 0x18, 0x50,
			0x00, 0xFC, 0x00, 0x00, 0xE0, 0x10, 0x00, 0x00,
			0x86, 0xA0, 0x41, 0x00, 0x40, 0x47, 0x20, 0x00,
			0x80, 0x00, 0xC0, 0x83, 0x04, 0xE0, 0x3D, 0x1E,
			0x04, 0x80, 0x11, 0xE0, 0x08, 0x44, 0x26, 0x33,
			0x02, 0xCB, 0x00, 0x10, 0xE0, 0x10, 0x40, 0x83,
			0x08, 0x00, 0x28, 0x21, 0x84, 0xCA, 0x61, 0x00,
			0x80, 0x07, 0x00, 0x81, 0x0C, 0xE0, 0x2C, 0x09,
			0x84, 0xCA, 0x21, 0x00, 0x00, 0xFC, 0x50, 0x00,
			0x8F, 0x00, 0x00, 0x01
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x78);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x18);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x30, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x78);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x1B);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x04, 0x00,
			0x00, 0x00, 0x03, 0x28, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x6C, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x1C);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x78);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x1C);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x1C, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	{
		const uint8_t values[] = {
			0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0xFD, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x78);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x1C);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x03, 0x38, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		};
		res = tas5825m_write_block_at(dev, 0x3C, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x78);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x1C);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x03, 0x40, 0x00, 0x00, 0x03, 0x48,
			0x00, 0x00, 0x03, 0x50, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x54, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	{
		const uint8_t values[] = {
			0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0xFD, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x78);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x1C);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x03, 0x58, 0x00, 0x00, 0x03, 0x60,
			0x00, 0x00, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x74, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x1D);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x78);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x1D);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x1C, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	{
		const uint8_t values[] = {
			0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0xFD, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x78);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x1D);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x3C, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x1E);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x78);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x1E);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x03, 0x68, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		};
		res = tas5825m_write_block_at(dev, 0x0C, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x78);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x1E);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x03, 0x70, 0x00, 0x00, 0x03, 0x78,
			0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x24, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	{
		const uint8_t values[] = {
			0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0xFD, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x78);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x1E);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x04, 0x88, 0x00, 0x00, 0x04, 0x90,
		};
		res = tas5825m_write_block_at(dev, 0x44, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x8C);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x0E);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0xA7, 0x26, 0x4A, 0x7F, 0xFF, 0xFF, 0xFF,
			0x00, 0x20, 0xC4, 0x9C, 0x00, 0x20, 0xC4, 0x9C,
			0x00, 0x00, 0x68, 0xDB, 0x00, 0x00, 0xD1, 0xB7,
			0x00, 0x00, 0x68, 0xDB, 0x0F, 0xA4, 0xA8, 0xC1,
			0xF8, 0x59, 0x7F, 0x63
		};
		res = tas5825m_write_block_at(dev, 0x5C, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x0F);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 0xB7, 0xE9,
			0x00, 0x5F, 0x6F, 0xD2, 0x00, 0x2F, 0xB7, 0xE9,
			0x0B, 0x1E, 0x4F, 0x76, 0xFC, 0x23, 0x05, 0x54,
			0xFA, 0x41, 0x20, 0x5C, 0x0B, 0x7D, 0xBF, 0x48,
			0xFA, 0x41, 0x20, 0x5C, 0x0B, 0x1E, 0x4F, 0x76,
			0xFC, 0x23, 0x05, 0x54, 0x00, 0x04, 0x81, 0x6F,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x0F, 0x3F, 0xE5, 0xC9, 0xF8, 0xBB, 0x98, 0xC8,
			0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x81, 0x6F,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x0F, 0x3F, 0xE5, 0xC9, 0xF8, 0xBB, 0x98, 0xC8,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x10);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x89, 0xA0, 0x27, 0x7F, 0xEC, 0x56, 0xD5,
			0x7F, 0xFC, 0xB9, 0x23, 0x00, 0x89, 0xA0, 0x27,
			0x7F, 0xEC, 0x56, 0xD5, 0x7F, 0xFC, 0xB9, 0x23,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x40, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x00);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x11, 0xFF
		};
		res = tas5825m_write_block_at(dev, 0x7D, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x01);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x51, 0x05);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x02);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x19, 0xDF);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x8C);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x01);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x71, 0x94, 0x9A
		};
		res = tas5825m_write_block_at(dev, 0x2C, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x0A);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
			0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x64, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x0B);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x80, 0x00, 0x00, 0x00, 0x37, 0xDF, 0xC0,
			0x00, 0x37, 0xDF, 0xC0, 0x00, 0x80, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x80, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	{
		const uint8_t values[] = {
			0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x57, 0x62, 0x00, 0x00, 0x00, 0x00,
		};
		res = tas5825m_write_block_at(dev, 0x28, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x0E);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x03, 0x69, 0xC5, 0x00, 0x60, 0x3F, 0x2A,
			0x00, 0x22, 0x1D, 0x95, 0x00, 0x03, 0x69, 0xC5,
		};
		res = tas5825m_write_block_at(dev, 0x5C, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x0F);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x7F, 0xF9, 0x2C, 0x60, 0x04, 0x1A, 0xB4, 0xF9,
		};
		res = tas5825m_write_block_at(dev, 0x5C, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x07);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x80, 0x00, 0x00
		};
		res = tas5825m_write_block_at(dev, 0x64, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	{
		const uint8_t values[] = {
			0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
		};
		res = tas5825m_write_block_at(dev, 0x6C, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0xAA);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x01);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x08, 0x10, 0x92, 0xFE, 0xF0, 0x84, 0x2F, 0xC0,
			0x07, 0x6F, 0x67, 0x29, 0x0F, 0x7B, 0xD0, 0x40,
			0xF8, 0x80, 0x05, 0xDA, 0x08, 0x18, 0xBA, 0xDB,
			0xF0, 0xA9, 0xF7, 0x0B, 0x07, 0x44, 0x20, 0x4E,
			0x0F, 0x56, 0x08, 0xF5, 0xF8, 0xA3, 0x24, 0xD7,
			0x08, 0x20, 0x24, 0xC9, 0xF1, 0x08, 0x6D, 0x45,
			0x06, 0xE7, 0x92, 0x27, 0x0E, 0xF7, 0x92, 0xBB,
			0xF8, 0xF8, 0x49, 0x10, 0x08, 0x13, 0xEA, 0xAD,
			0xF3, 0x14, 0xE9, 0xB1, 0x05, 0x4B, 0xD4, 0xF4,
			0x0C, 0xEB, 0x16, 0x4F, 0xFA, 0xA0, 0x40, 0x5F,
		};
		res = tas5825m_write_block_at(dev, 0x30, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x02);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x08, 0x13, 0x8A, 0xBF, 0xF0, 0x78, 0x40, 0xD7,
			0x07, 0x77, 0x45, 0xB3, 0x0F, 0x87, 0xBF, 0x29,
			0xF8, 0x75, 0x2F, 0x8E, 0x08, 0x46, 0x76, 0x67,
			0xF6, 0x0C, 0xF9, 0x7A, 0x03, 0x36, 0x96, 0xD5,
			0x09, 0xF3, 0x06, 0x86, 0xFC, 0x82, 0xF2, 0xC4,
			0x08, 0x0B, 0x02, 0xAF, 0xF0, 0xBC, 0xDB, 0x13,
			0x07, 0x40, 0x84, 0x68, 0x0F, 0x43, 0x24, 0xED,
			0xF8, 0xB4, 0x78, 0xEA, 0x08, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x03);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x07, 0xB7, 0x9B, 0x16,
			0xF0, 0x90, 0xC9, 0xD5, 0x07, 0xB7, 0x9B, 0x16,
			0x0F, 0x6D, 0xB0, 0xA9, 0xF8, 0x8F, 0x44, 0x52,
			0x07, 0xBB, 0x6D, 0x71, 0xF0, 0xCF, 0x04, 0xEA,
			0x07, 0x7F, 0x86, 0x4C, 0x0F, 0x30, 0xFB, 0x16,
			0xF8, 0xC5, 0x0C, 0x43, 0x08, 0x49, 0x93, 0xE5,
			0xF0, 0x43, 0x4D, 0x1F, 0x07, 0x7D, 0x73, 0x57,
			0x0F, 0xC0, 0x4F, 0x67, 0xF8, 0x3C, 0x95, 0x49,
			0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x04);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x05);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x07, 0xB7, 0x9B, 0x16, 0xF0, 0x90, 0xC9, 0xD5,
			0x07, 0xB7, 0x9B, 0x16, 0x0F, 0x6D, 0xB0, 0xA9,
			0xF8, 0x8F, 0x44, 0x52, 0x07, 0xBB, 0x6D, 0x71,
			0xF0, 0xCF, 0x04, 0xEA, 0x07, 0x7F, 0x86, 0x4C,
			0x0F, 0x30, 0xFB, 0x16, 0xF8, 0xC5, 0x0C, 0x43,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x06);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x08, 0x49, 0x93, 0xE5, 0xF0, 0x43, 0x4D, 0x1F,
			0x07, 0x7D, 0x73, 0x57, 0x0F, 0xC0, 0x4F, 0x67,
			0xF8, 0x3C, 0x95, 0x49, 0x08, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x0E);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x00, 0x99, 0xF7, 0x27, 0xFF, 0x09, 0x5A, 0xB9,
			0x00, 0x66, 0xFF, 0x35, 0x0F, 0xB7, 0xB4, 0x87,
			0xF8, 0x3D, 0xFA, 0x65
		};
		res = tas5825m_write_block_at(dev, 0x6C, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x0F);
	if (res < 0)
		return res;

	{
		const uint8_t values[] = {
			0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x3D, 0x95,
			0xFF, 0xFE, 0x7B, 0x29, 0xFF, 0xFF, 0x3D, 0x95,
			0x0F, 0x62, 0x3F, 0x77, 0xF8, 0x9A, 0xB6, 0xDB,
			0x07, 0xB1, 0xE2, 0x27, 0xF0, 0x9C, 0x3B, 0xB2,
			0x07, 0xB1, 0xE2, 0x27, 0x0F, 0x62, 0x3F, 0x77,
			0xF8, 0x9A, 0xB6, 0xDB, 0x00, 0x00, 0x38, 0xE4,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x0F, 0xD5, 0x55, 0x55, 0xF8, 0x2A, 0x71, 0xC7,
		};
		res = tas5825m_write_block_at(dev, 0x08, values, ARRAY_SIZE(values));
		if (res < 0)
			return res;
	}

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x60, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x63, 0x03);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x30, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x4C, 0x30);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x03, 0x0B);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x78, 0x80);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x03, 0x03);
	if (res < 0)
		return res;

	res = tas5825m_set_page(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_set_book(dev, 0x00);
	if (res < 0)
		return res;

	res = tas5825m_write_at(dev, 0x03, 0x03);
	if (res < 0)
		return res;

	return 0;
}
