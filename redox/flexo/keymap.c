#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _FUNC 1
#define FN_FUNC MO(_FUNC)

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    FUNC,
};

enum unicode_name {
    TJOY, // tears of joy 😂
    SMRK, // smirk 😏
    THUP, // thumb up 👍
    THNK, // thinking 🤔
    COOL, // smile with sunglasses 😎
    PTUP, // point-up ☝️
};

const uint32_t PROGMEM unicode_map[] = {
    [TJOY] = 0x1F602,
    [SMRK] = 0x1F60F,
    [THUP] = 0x1F44D,
    [THNK] = 0x1F914,
    [COOL] = 0x1F60E,
    [PTUP] = 0x1FE0F,
};

#define KC_CTES MT(MOD_LCTL, KC_ESC)
#define KC_ALTA MT(MOD_LALT, KC_TAB)
#define KC_CTQU MT(MOD_RCTL, KC_QUOTE)
#define KC_ALBS MT(MOD_LALT, KC_BSLS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
     KC_GRV  ,KC_1    ,KC_2    ,KC_3     ,KC_4    ,KC_5                                            ,KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
     KC_ALTA ,KC_Q    ,KC_W    ,KC_E     ,KC_R    ,KC_T    ,KC_ESC                        ,KC_EQL  ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_ALBS ,
     KC_CTES ,KC_A    ,KC_S    ,KC_D     ,KC_F    ,KC_G    ,KC_LBRC                       ,KC_RBRC ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_CTQU ,
     KC_LSFT ,KC_Z    ,KC_X    ,KC_C     ,KC_V    ,KC_B    ,KC_DEL  ,KC_INS      ,KC_PGUP ,KC_PGDN ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
     KC_RALT ,KC_RALT ,KC_LEFT ,KC_RIGHT ,KC_LGUI          ,KC_BSPC ,KC_TAB      ,KC_ENT  ,KC_SPC           ,KC_LGUI ,KC_DOWN ,KC_UP   ,FN_FUNC ,KC_RALT
  ),

  [_FUNC] = LAYOUT(
     _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4    ,KC_F5                                           ,KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F12  ,
     _______ ,_______ ,_______ ,_______ ,_______  , X(THNK),_______                       ,_______ ,_______ ,X(PTUP) ,_______ ,_______ ,KC_MPRV ,_______ ,
     _______ ,_______ ,X(SMRK) ,X(TJOY) ,_______  ,_______ ,_______                       ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
     _______ ,_______ ,_______ ,X(COOL) ,_______  ,_______ ,_______ ,_______     ,_______ ,_______ ,KC_MNXT ,KC_MUTE ,KC_VOLD ,KC_VOLU ,_______ ,_______ ,
     _______ ,_______ ,_______ ,_______ ,_______           ,_______ ,_______     ,_______ ,KC_MPLY          ,_______ ,_______ ,_______ ,_______ ,_______
  )
};
