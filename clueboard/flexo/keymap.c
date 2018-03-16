#include "66.h"

#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BL] = LAYOUT(
  KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_BSPC, KC_PGUP,
  KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN,
  KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, _______, KC_ENT,
  KC_LSFT, _______, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, _______, KC_RSFT, KC_UP,
  KC_LCTL, KC_LALT, KC_LGUI, _______, KC_SPC, KC_SPC, _______, KC_RGUI, KC_RALT, MO(_FL), KC_LEFT, KC_DOWN, KC_RGHT),

[_FL] = LAYOUT(
  KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, KC_DEL, KC_INS,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MRWD, _______, _______, _______, KC_DEL,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,_______,_______,_______,
  _______, _______, _______, _______, _______, _______, _______, KC_MFFD, KC_MUTE, KC_VOLD, KC_VOLU,_______, _______,_______, KC_PGUP,
  _______, _______, _______, _______, _______, _______, KC_MPLY, _______, _______, MO(_FL), KC_HOME, KC_PGDN, KC_END),
};
