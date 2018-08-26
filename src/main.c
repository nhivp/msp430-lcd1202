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

#include <stdint.h>
#include "msp430g2553.h"
#include "hal_lcd.h"
/**
 *  Typedef definition
 */

/**
 *  Macro definition
 */

/**
 * Private function prototypes
 */
static void board_init(void);

/**
 *  Private variables
 */

/**
 *  Exported variables
 */

/**
 * Main App
 */
int main(void)
{
    board_init();
    lcd_init();

    lcd_gotoxy(0, 1);
    lcd_prints(">> nhivp 2018 <<");

    lcd_gotoxy(0, 6);
    lcd_prints(">>>>>>>><<<<<<<<");

    while (1)
    {

    }
}

/**
 * Initialize the board MSP430G2 LaunchPad
 */
static void board_init(void)
{
    WDTCTL = WDTPW + WDTHOLD; // Stop WDT
    /* Load calibrated DCO vlues to set CPU clock to 1MHz */
    BCSCTL1 = CALBC1_1MHZ;    // Set DCO to 1MHz
    DCOCTL = CALDCO_1MHZ;     // Set DCO to 1MHz
}
