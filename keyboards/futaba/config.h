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

/*
#define DRV2605L_FB_ERM_LRA 1
#define DRV2605L_FB_BRAKEFACTOR 6
#define DRV2605L_FB_LOOPGAIN 1


#define DRV2605L_RATED_VOLTAGE 3
#define DRV2605L_V_RMS 3
#define DRV2605L_V_PEAK 3
#define DRV2605L_F_LRA 220
*/

//#define MACOS_HOST 1  // 启用 Mac OS 支持
//#define MACOS_DEFAULT_MODIFIER_MACROS 1  // 启用 Mac 特定的修饰键宏

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_OUT_IN
#define RGB_MATRIX_DEFAULT_HUE 128
#define RGB_MATRIX_DEFAULT_SAT 255
#define RGB_MATRIX_DEFAULT_VAL 255
#define RGB_MATRIX_DEFAULT_SPD 60
