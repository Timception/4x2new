#pragma once

#define VIAL_KEYBOARD_UID {0xCA, 0x24, 0xDC, 0x4A, 0x52, 0x73, 0x0A, 0x56}

// Unlock with top left key (row 0, column 0) and
// top right key (row 3, column 5):
//#define VIAL_UNLOCK_COMBO_ROWS { 0, 3 }
//#define VIAL_UNLOCK_COMBO_COLS { 0, 5 }

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U