/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off
enum layers{
  MAC_BASE,
  L1,
  L2,
  L3,
  L4,
  L5,
  L6,
  L7,
  L8,
  WIN_BASE,
  WIN_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAC_BASE] = LAYOUT_tkl_ansi(
     KC_NO,    KC_BRID,           KC_BRIU,           KC_MCTL,           KC_LPAD,    RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,    KC_MNXT,           KC_MUTE,             KC_VOLD,           KC_VOLU,                                             KC_SNAP,   KC_SIRI,  RGB_MOD,
     KC_NO,    KC_NO,             KC_NO,             KC_NO,             KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,             KC_NO,               KC_NO,             KC_NO,     KC_NO,                                    KC_INS,    KC_HOME,  KC_PGUP,

     KC_NO,                       KC_Q,              MT(MOD_LCTL,KC_W), MT(MOD_LALT,KC_F), KC_P,       KC_B,           KC_NO,    KC_J,     KC_L,       MT(MOD_RALT,KC_U),   MT(MOD_RCTL,KC_Y),   KC_QUOT,                       KC_NO,     KC_NO,   KC_DEL,    KC_END,   KC_PGDN,
     KC_NO,                       MT(MOD_LSFT,KC_A), LT(4,KC_R),        LT(3,KC_S),        LT(2,KC_T), KC_G,           KC_NO,    KC_M,     LT(5,KC_N), LT(6,KC_E),          LT(7,KC_I),          MT(MOD_RSFT,KC_O), KC_ENT,
                                  MT(MOD_HYPR,KC_Z), KC_X,              KC_C,              KC_D,       KC_V,    KC_NO, KC_NO,    KC_K,     KC_H,       KC_COMM,             KC_DOT,              LT(1,KC_SCLN),                                                KC_UP,
     KC_NO,    KC_NO,             MT(MOD_LGUI,KC_ESC),                                                                 LT(8,KC_SPC),                                        MT(MOD_RGUI,KC_TAB),                    KC_NO, MO(L1), KC_NO,           KC_LEFT,   KC_DOWN,  KC_RGHT
),

[L1] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_F1,             KC_F2,             KC_F3,             KC_F4,      KC_F5,    KC_F6,    KC_F7,    KC_F8,      KC_F9,             KC_F10,              KC_F11,            KC_F12,                                             KC_TRNS,   KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,           BT_HST2,           BT_HST3,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,           KC_TRNS,             KC_TRNS,           KC_TRNS,   KC_TRNS,                                 KC_TRNS,   KC_TRNS,  KC_TRNS,

     KC_TRNS,                     RGB_MOD,           RGB_VAI,           RGB_HUI,           RGB_SAI,    RGB_SPI,        KC_NO,  KC_TRNS,  KC_TRNS,    KC_TRNS,             KC_TRNS,             KC_TRNS,           KC_TRNS,   KC_TRNS,              KC_TRNS,   KC_TRNS,  KC_TRNS,
     KC_TRNS,                     RGB_RMOD,          RGB_VAD,           RGB_HUD,           RGB_SAD,    RGB_SPD,        KC_NO,  KC_TRNS,  KC_TRNS,    KC_TRNS,             KC_TRNS,             KC_TRNS,           KC_TRNS,
                                  QK_MAKE,           QK_BOOT,           DB_TOGG,           EE_CLR,     BAT_LVL, KC_NO, KC_NO,  KC_TRNS,  KC_TRNS,    KC_TRNS,             KC_TRNS,             KC_TRNS,                                                       KC_TRNS,
     KC_TRNS,  KC_TRNS,           QK_RBT,                                                                              KC_TRNS,                                           KC_TRNS,                                KC_TRNS, KC_TRNS,  KC_TRNS,      KC_TRNS,   KC_TRNS,  KC_TRNS
),

[L2] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,                                            KC_TRNS,   KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,   KC_TRNS,                                 KC_TRNS,   KC_TRNS,  KC_TRNS,

     KC_TRNS,                     KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_NO,      KC_NO,          KC_NO,  KC_TRNS,  KC_PGUP,   KC_UP,              KC_HOME,             KC_TRNS,           KC_TRNS,   KC_TRNS,              KC_DEL,    KC_END,   KC_PGDN,
     KC_TRNS,                     KC_TRNS,           KC_BSPC,           KC_DEL,            KC_NO,      KC_NO,          KC_NO,  KC_TRNS,  KC_LEFT,   KC_DOWN,            KC_RGHT,             KC_TRNS,           KC_TRNS,
                                  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_NO,   KC_NO, KC_NO,  KC_TRNS,  KC_PGDN,   G(S(KC_X)),         KC_END,              KC_TRNS,                                                       KC_UP,
     KC_TRNS,  KC_TRNS,           KC_TRNS,                                                                             KC_ENT,                                          KC_TRNS,                                KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS,  KC_TRNS
),

[L3] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,                                            KC_TRNS,   KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,   KC_TRNS,                                 KC_TRNS,   KC_TRNS,  KC_TRNS,

     KC_TRNS,                     KC_TRNS,           KC_TRNS,           KC_NO,             KC_TRNS,    KC_TRNS,        KC_NO,  KC_PSLS,  KC_P7,     KC_P8,              KC_P9,               KC_PMNS,           KC_TRNS,   KC_TRNS,              KC_DEL,    KC_END,   KC_PGDN,
     KC_TRNS,                     KC_TRNS,           KC_PCMM,           KC_NO,             KC_PDOT,    KC_TRNS,        KC_NO,  KC_PAST,  KC_P4,     KC_P5,              KC_P6,               KC_PPLS,           KC_TRNS,
                                  KC_TRNS,           KC_TRNS,           KC_NO,             KC_TRNS,    KC_TRNS, KC_NO, KC_NO,  KC_TRNS,  KC_P1,     KC_P2,              KC_P3,               KC_PEQL,                                                       KC_UP,
     KC_TRNS,  KC_TRNS,           KC_TRNS,                                                                             KC_ENT,                                          KC_P0,                                KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS,  KC_TRNS
),

[L4] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,                                            KC_TRNS,   KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,   KC_TRNS,                                 KC_TRNS,   KC_TRNS,  KC_TRNS,

     KC_TRNS,                     KC_TRNS,           KC_NO,             G(KC_F),           KC_TRNS,    KC_TRNS,        KC_NO,    KC_TRNS,  KC_VOLD,   KC_MUTE,            KC_VOLU,             KC_TRNS,           KC_TRNS,   KC_TRNS,              KC_DEL,    KC_END,   KC_PGDN,
     KC_TRNS,                     G(KC_K),           KC_NO,             G(KC_V),           G(KC_C),    G(KC_X),        KC_NO,    KC_MCTL,  KC_MRWD,   KC_MPLY,            KC_MFFD,             KC_SIRI,           KC_TRNS,
                                  KC_TRNS,           KC_NO,             G(KC_Z),           KC_TRNS,    KC_TRNS, KC_NO, KC_NO,    KC_TRNS,  KC_BRIU,   KC_BRID,            KC_LPAD,             KC_TRNS,                                                       KC_UP,
     KC_TRNS,  KC_TRNS,           KC_TRNS,                                                                             KC_TRNS,                                           KC_TRNS,                                KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS,  KC_TRNS
),

[L5] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,                                            KC_TRNS,   KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,   KC_TRNS,                                 KC_TRNS,   KC_TRNS,  KC_TRNS,

     KC_TRNS,                     KC_GRV,            KC_PIPE,           KC_LBRC,           KC_RBRC,    KC_DLR,         KC_NO,    KC_NO,    KC_NO,     KC_ASTR,            KC_UNDS,             KC_PLUS,           KC_TRNS,   KC_TRNS,              KC_DEL,    KC_END,   KC_PGDN,
     KC_TRNS,                     KC_HASH,           KC_SLSH,           KC_LPRN,           KC_RPRN,    KC_PERC,        KC_NO,    KC_NO,    KC_NO,     KC_AT,              KC_MINS,             KC_COLN,           KC_TRNS,
                                  KC_CIRC,           KC_BSLS,           KC_LCBR,           KC_RCBR,    KC_AMPR, KC_NO, KC_NO,    KC_NO,    KC_NO,     KC_EXLM,            KC_QUES,             KC_SCLN,                                                       KC_UP,
     KC_TRNS,  KC_TRNS,           KC_TRNS,                                                                             KC_TRNS,                                           KC_TRNS,                                KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS,  KC_TRNS
),

[L6] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,                                            KC_TRNS,   KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,   KC_TRNS,                                 KC_TRNS,   KC_TRNS,  KC_TRNS,

     KC_TRNS,                     KC_NUM,            KC_F17,            KC_F18,            KC_F19,     KC_F20,         KC_NO,    KC_F21,   KC_F22,    KC_NO,              KC_F23,              KC_F24,            KC_TRNS,   KC_TRNS,              KC_DEL,    KC_END,   KC_PGDN,
     KC_TRNS,                     KC_CAPS,           KC_F9,             KC_F10,            KC_F11,     KC_F12,         KC_NO,    KC_F13,   KC_F14,    KC_NO,              KC_F15,              KC_F16,            KC_TRNS,
                                  KC_SCRL,           KC_F1,             KC_F2,             KC_F3,      KC_F4,   KC_NO, KC_NO,    KC_F5,    KC_F6,     KC_NO,              KC_F7,               KC_F8,                                                         KC_UP,
     KC_TRNS,  KC_TRNS,           KC_TRNS,                                                                             KC_TRNS,                                           KC_TRNS,                                KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS,  KC_TRNS
),

[L7] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,                                            KC_TRNS,   KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,   KC_TRNS,                                 KC_TRNS,   KC_TRNS,  KC_TRNS,

     KC_TRNS,                     KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,        KC_NO,  KC_TRNS,    DF(L3),        KC_TRNS,        KC_NO,             KC_NO,             KC_TRNS,   KC_TRNS,              KC_TRNS,   KC_TRNS,  KC_TRNS,
     KC_TRNS,                     KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,        KC_NO,  DF(L2),     DF(MAC_BASE),  KC_TRNS,        KC_NO,             KC_TRNS,           KC_TRNS,
                                  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS, KC_NO, KC_NO,  KC_TRNS,    DF(L8),        KC_TRNS,        KC_NO,             KC_NO,                                                       KC_TRNS,
     KC_TRNS,  KC_TRNS,           KC_TRNS,                                                                             KC_TRNS,                                           KC_TRNS,                                KC_TRNS, KC_TRNS,  KC_TRNS,      KC_TRNS,   KC_TRNS,  KC_TRNS
),

[L8] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,                                            KC_TRNS,   KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,           KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,             KC_TRNS,           KC_TRNS,   KC_TRNS,                                 KC_TRNS,   KC_TRNS,  KC_TRNS,

     KC_TRNS,                     KC_NO,             KC_WH_L,           KC_WH_U,           KC_WH_R,    KC_NO,          KC_NO,  KC_NO,      KC_NO,         KC_MS_U,        KC_NO,             KC_NO,             KC_TRNS,   KC_TRNS,              KC_TRNS,   KC_TRNS,  KC_TRNS,
     KC_TRNS,                     KC_BTN4,           KC_BTN2,           KC_WH_D,           KC_BTN1,    KC_BTN5,        KC_NO,  KC_NO,      KC_MS_L,       KC_MS_D,        KC_MS_R,           KC_NO,             KC_TRNS,
                                  KC_NO,             KC_NO,             KC_BTN3,           KC_NO,      KC_NO,   KC_NO, KC_NO,  KC_NO,      KC_NO,         KC_NO,          KC_NO,             KC_NO,                                                       KC_TRNS,
     KC_TRNS,  KC_TRNS,           KC_TRNS,                                                                             KC_NO,                                             KC_TRNS,                                KC_TRNS, KC_TRNS,  KC_TRNS,      KC_TRNS,   KC_TRNS,  KC_TRNS
),


[WIN_BASE] = LAYOUT_tkl_ansi(
     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,             KC_PSCR,   KC_CTANA, RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,    KC_HOME,  KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,    KC_END,   KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,             KC_UP,
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RGUI, MO(L1),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[WIN_FN] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,            KC_TRNS,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS)

};
