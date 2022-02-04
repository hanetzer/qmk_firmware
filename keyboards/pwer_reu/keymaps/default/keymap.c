// Copyright 2022 Marty (@hanetzer)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Base */
	[_BASE] = LAYOUT_split_2x6_3(
	KC_TAB, KC_Q, KC_W, KC_E, KC_R,    KC_T,       KC_Y,   KC_U,   KC_I, KC_O, KC_P,    KC_LBRC, KC_RBRC,
	KC_ESC, KC_A, KC_S, KC_D, KC_F,    KC_G,       KC_H,   KC_J,   KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
	                          KC_SPC,  KC_BSPC,    KC_DEL, KC_ENT
	),
	[_FN] = LAYOUT_split_2x6_3(
	KC_TAB, KC_Q, KC_W, KC_E, KC_R,   KC_T,       KC_Y,   KC_U,    KC_I, KC_O, KC_P,    KC_LBRC, KC_RBRC,
	KC_ESC, KC_A, KC_S, KC_D, KC_F,   KC_G,       KC_H,   KC_J,    KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
	                          KC_SPC, KC_BSPC,    KC_DEL, KC_ENT
	)
};
