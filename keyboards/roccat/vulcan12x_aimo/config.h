#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID   0x1e7d // ROCCAT
#define PRODUCT_ID  0x3098 // Vulcan 12x AIMO
#define DEVICE_VER  0x0001
#define MANUFACTURER    roccat
#define PRODUCT         Vulcan 12x AIMO mod

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 16

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION ROW2COL

#define MATRIX_COL_PINS { \
    GPIO1_0, GPIO1_1, GPIO1_2, GPIO1_3, GPIO1_4, GPIO1_5, GPIO1_6, GPIO1_7, \
    GPIO1_8, GPIO1_9, GPIO1_10, GPIO1_11, GPIO1_12, GPIO1_13, GPIO1_14, GPIO1_15, }
#define MATRIX_ROW_PINS { \
    GPIO0_16, GPIO0_17, GPIO0_18, GPIO0_19, GPIO0_20, GPIO0_21, GPIO0_22, GPIO0_23 }
