// Copyright 2022 Marty (@hanetzer)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER hanetzer
#define PRODUCT      pwer_reu

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 6

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define DIRECT_PINS { \
	{  2,  3,  4,  5,  6,  7 }, \
	{  8,  9, 10, 11, 12, 13 }, \
	{ 14, 15, 16, NO_PIN, NO_PIN, NO_PIN } \
}

#define DIRECT_PINS_RIGHT { \
	{  7,  6,  5,  4, 3, 2 }, \
	{ 13, 12, 11, 10, 9, 8 }, \
	{ 16, 15, 14, NO_PIN, NO_PIN, NO_PIN } \
}

#define UNUSED_PINS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Serial settings */
#define USE_SERIAL

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
/* #define SOFT_SERIAL_PIN 20  // or D1, D2, D3, E6 */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN 0
#define SERIAL_USART_RX_PIN 1

/* #define EE_HANDS */

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT 5
#define BOOTMAGIC_LITE_COLUMN_RIGHT 3
