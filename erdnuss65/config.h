

#pragma once

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    PB Design Studio
#define PRODUCT         Erdnuss65


#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { F5, F4, D5, D6, D7 }
#define MATRIX_COL_PINS { F7, F6, B2, B3, B1, E6, D1, D2, D3, D4, B4, B5, B6, C6, C7 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5


