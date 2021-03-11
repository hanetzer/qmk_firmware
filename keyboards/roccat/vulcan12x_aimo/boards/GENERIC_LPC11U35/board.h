#pragma once

/*
 * Setup for NXP LPC11U35 board.
 */

/*
 * Board identifier.
 */
#define BOARD_GENERIC_LPC11U35
#define BOARD_NAME "Generic LPC11U35"

#define GPIO0_0     PAL_LINE(IOPORT0, 0)
#define GPIO0_1     PAL_LINE(IOPORT0, 1)
#define GPIO0_2     PAL_LINE(IOPORT0, 2)
#define GPIO0_3     PAL_LINE(IOPORT0, 3)
#define GPIO0_4     PAL_LINE(IOPORT0, 4)
#define GPIO0_5     PAL_LINE(IOPORT0, 5)
#define GPIO0_6     PAL_LINE(IOPORT0, 6)
#define GPIO0_7     PAL_LINE(IOPORT0, 7)
#define GPIO0_8     PAL_LINE(IOPORT0, 8)
#define GPIO0_9     PAL_LINE(IOPORT0, 9)
#define GPIO0_10    PAL_LINE(IOPORT0, 10)
#define GPIO0_11    PAL_LINE(IOPORT0, 11)
#define GPIO0_12    PAL_LINE(IOPORT0, 12)
#define GPIO0_13    PAL_LINE(IOPORT0, 13)
#define GPIO0_14    PAL_LINE(IOPORT0, 14)
#define GPIO0_15    PAL_LINE(IOPORT0, 15)
#define GPIO0_16    PAL_LINE(IOPORT0, 16)
#define GPIO0_17    PAL_LINE(IOPORT0, 17)
#define GPIO0_18    PAL_LINE(IOPORT0, 18)
#define GPIO0_19    PAL_LINE(IOPORT0, 19)
#define GPIO0_20    PAL_LINE(IOPORT0, 20)
#define GPIO0_21    PAL_LINE(IOPORT0, 21)
#define GPIO0_22    PAL_LINE(IOPORT0, 22)
#define GPIO0_23    PAL_LINE(IOPORT0, 23)

#define GPIO1_0     PAL_LINE(IOPORT1, 0)
#define GPIO1_1     PAL_LINE(IOPORT1, 1)
#define GPIO1_2     PAL_LINE(IOPORT1, 2)
#define GPIO1_3     PAL_LINE(IOPORT1, 3)
#define GPIO1_4     PAL_LINE(IOPORT1, 4)
#define GPIO1_5     PAL_LINE(IOPORT1, 5)
#define GPIO1_6     PAL_LINE(IOPORT1, 6)
#define GPIO1_7     PAL_LINE(IOPORT1, 7)
#define GPIO1_8     PAL_LINE(IOPORT1, 8)
#define GPIO1_9     PAL_LINE(IOPORT1, 9)
#define GPIO1_10    PAL_LINE(IOPORT1, 10)
#define GPIO1_11    PAL_LINE(IOPORT1, 11)
#define GPIO1_12    PAL_LINE(IOPORT1, 12)
#define GPIO1_13    PAL_LINE(IOPORT1, 13)
#define GPIO1_14    PAL_LINE(IOPORT1, 14)
#define GPIO1_15    PAL_LINE(IOPORT1, 15)
#define GPIO1_16    PAL_LINE(IOPORT1, 16)
#define GPIO1_17    PAL_LINE(IOPORT1, 17)
#define GPIO1_18    PAL_LINE(IOPORT1, 18)
#define GPIO1_19    PAL_LINE(IOPORT1, 19)
#define GPIO1_20    PAL_LINE(IOPORT1, 20)
#define GPIO1_21    PAL_LINE(IOPORT1, 21)
#define GPIO1_22    PAL_LINE(IOPORT1, 22)
#define GPIO1_23    PAL_LINE(IOPORT1, 23)
#define GPIO1_24    PAL_LINE(IOPORT1, 24)
#define GPIO1_25    PAL_LINE(IOPORT1, 25)
#define GPIO1_26    PAL_LINE(IOPORT1, 26)
#define GPIO1_27    PAL_LINE(IOPORT1, 27)
#define GPIO1_28    PAL_LINE(IOPORT1, 28)
#define GPIO1_29    PAL_LINE(IOPORT1, 29)
// No GPIO1_30
#define GPIO1_31    PAL_LINE(IOPORT1, 31)

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
    void boardInit(void);
#ifdef __cplusplus
}
#endif

#endif /* _FROM_ASM_ */
