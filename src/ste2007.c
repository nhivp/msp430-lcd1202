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

#include "ste2007.h"

void ste_init(void)
{
    LCD_PIN_TYPE_OUTPUT;
    LCD_RESET_LOW;
    LCD_CS_HIGH;
    LCD_CLK_LOW;
    LCD_RESET_HIGH;
}

void ste_write(char dc, char byte)
{
    char i;

    /* shift D/!C out */
    if(dc)
    {
        LCD_SDA_HIGH;
    }
    else
    {
        LCD_SDA_LOW;
    }

    LCD_CS_LOW;
    LCD_CLK_HIGH;
    LCD_CLK_LOW;

    /* shift data out */
    for(i = 0; i < 8; i++)
    {
        if((byte<<i) & 0x80)
        {
            LCD_SDA_HIGH;
        }
        else
        {
            LCD_SDA_LOW;
        }

        LCD_CLK_HIGH;
        LCD_CLK_LOW;
    }
    // __delay_cycles(5);
    LCD_CS_HIGH;
}