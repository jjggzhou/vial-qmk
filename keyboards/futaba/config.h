// Copyright 2024 geek-rabb1t (@geek-rabb1t)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

#define AZOTEQ_IQS5XX_TPS65

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

#define MOUSE_EXTENDED_REPORT

// #define POINTING_DEVICE_DEBUG
#define AZOTEQ_IQS5XX_PRESS_AND_HOLD_ENABLE true
// #define POINTING_DEVICE_DEBUG


#define DRV2605L_FB_ERM_LRA 1
#define DRV2605L_FB_BRAKEFACTOR 6 /* For 1x:0, 2x:1, 3x:2, 4x:3, 6x:4, 8x:5, 16x:6, Disable Braking:7 */
#define DRV2605L_FB_LOOPGAIN 1 /* For  Low:0, Medium:1, High:2, Very High:3 */

/* Please refer to your datasheet for the optimal setting for your specific motor. */
#define DRV2605L_RATED_VOLTAGE 3
#define DRV2605L_V_RMS 3
#define DRV2605L_V_PEAK 3
#define DRV2605L_F_LRA 220 /* resonance freq */
