/**
 * Copyright (C) 2018  nhivp
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _HAL_LCD_H_
#define _HAL_LCD_H_
#include <stdint.h>

extern void lcd_init(void);
extern void lcd_printc(char c);
extern void lcd_prints(char* s);
extern void lcd_writedata(const char *dataBuf, uint32_t dataLen);
extern void lcd_gotoxy(uint8_t col, uint8_t row);
extern void lcd_printf(char *format, ...);
extern void lcd_displayImage(uint8_t row, uint8_t col,
                            uint8_t height, uint8_t width,
                            uint8_t* image);
extern void lcd_home(void);
extern void lcd_clear(void);
extern void lcd_normal(void);
extern void lcd_all(void);
extern void lcd_mirror_x(void);
extern void lcd_mirror_y(void);

#endif /* _HAL_LCD_H_ */
