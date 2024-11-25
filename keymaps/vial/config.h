#pragma once

#define VIAL_KEYBOARD_UID {0xCA, 0x24, 0xDC, 0x4A, 0x52, 0x73, 0x0A, 0x56}

// Unlock with top left key (row 0, column 0) and
// top right key (row 3, column 5):
//#define VIAL_UNLOCK_COMBO_ROWS { 0, 3 }
//#define VIAL_UNLOCK_COMBO_COLS { 0, 5 }

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

// The pin connected to the data pin of the LEDs
//#define WS2812_DI_PIN GP7

// The number of LEDs connected
//#define RGB_MATRIX_LED_COUNT 4

#ifdef RGBLIGHT_ENABLE

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE

#endif