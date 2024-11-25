#include QMK_KEYBOARD_H
#include <stdio.h>

// d e f i n e   l a y e r s

enum Layers {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};

enum custom_keycodes {
    BASE,
    LOWER,
    RAISE,
    ADJUST
};

#define BASE MO(_QWERTY)
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)


// K E Y M A P 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 
   [_BASE] = LAYOUT(
 
    LCTL(KC_C), LCTL(KC_X), SGUI(KC_S), UG_NEXT,
	LCTL(KC_V), LCTL(KC_Z), KC_F5,      UG_PREV,
	LGUI(KC_TAB)
 ),


   [_LOWER] = LAYOUT(

    KC_BTN1, KC_MS_U, KC_BTN2, TO(2),
	KC_MS_L, KC_MS_D, KC_MS_R, TO(0),
	KC_BTN3
 ),
  

   [_RAISE] = LAYOUT(
 
    RGB_MOD,  RGB_VAI, RGB_SPI, TO(3),
	RGB_RMOD, RGB_VAD, RGB_SPD, TO(1),
	RGB_MOD
 ),
 

   [_ADJUST] = LAYOUT(
 
    KC_TRNS, KC_TRNS, KC_TRNS, TO(0),
    KC_TRNS, KC_TRNS, KC_TRNS, TO(2),
	LGUI(KC_TAB)
 )
};

// E N D  K E Y M A P


// E N C O D E R

#ifdef ENCODER_ENABLE

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_LEFT, KC_RGHT) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};

#endif

// E N D  E N C O D E R 


