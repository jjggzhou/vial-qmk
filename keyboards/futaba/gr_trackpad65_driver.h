/* Copyright 2024 Geek-rabb1t (@geek-rabb1t)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

typedef struct {
    int x;
    int y;
} position_t;

typedef struct {
    int x;
    int y;
    int strength;
} position_with_strength_t;

// 滚动方向的枚举定义
typedef enum {
    scroll_direction_vertical,    // 垂直滚动
    scroll_direction_horizontal,  // 水平滚动
    scroll_direction_both,       // 双向滚动
    scroll_direction_tbd,        // 待定方向
} scroll_direction_t;

typedef struct {
    position_t pos;
    position_t prev_pos;
    mouse_xy_report_t mouse_report_x;
    mouse_xy_report_t mouse_report_y;
    int touch_strength;
    int num_of_fingers;
} trackpad_base_data_t;

// 触摸状态的枚举定义
typedef enum {
    touch_state_none,   // 无触摸
    touch_state_touch,  // 轻触状态
    touch_state_press,  // 按压状态
} touch_state_t;

// 触摸板状态的枚举定义
typedef enum {
    trackpad_state_idle,         // 空闲状态
    trackpad_state_touch,        // 触摸状态
    trackpad_state_move,         // 移动状态
    trackpad_state_gesture,      // 手势状态
    trackpad_state_gesture_fire, // 手势触发状态
    trackpad_state_press,        // 按压状态
    trackpad_state_wait,         // 等待状态
} trackpad_state_t;

// 触摸板手势事件的枚举定义
typedef enum  {
    trackpad_event_none = -1,        // 无事件
    trackpad_event_swipe_up = 0,
    trackpad_event_swipe_right = 1,
    trackpad_event_swipe_down = 2,
    trackpad_event_swipe_left = 3,
} trackpad_gesture_event_t;

typedef struct {
    bool is_pressed;
    pointing_device_buttons_t button_num;
} dispatch_button_t;

typedef struct {
    trackpad_gesture_event_t type;
    int8_t num_of_fingers;
} trackpad_event_t;

extern trackpad_event_t trackpad_event;

// 触摸板配置结构体
typedef struct {
    bool    reverse_vertical_scroll;    // 是否反转垂直滚动
    bool    reverse_horizontal_scroll;  // 是否反转水平滚动
    bool    disable_3fingers_tap;       // 是否禁用三指点击
} trackpad_config_t;

// 配置掩码定义
#define REVERSE_VERTICAL_SCROLL_MASK   0b0000000000000001   // 反转垂直滚动掩码
#define REVERSE_HORIZONTAL_SCROLL_MASK 0b0000000000000010   // 反转水平滚动掩码
#define REVERSE_DISABLE_3FINGERS_MASK  0b0000000000000100   // 禁用三指点击掩码

extern trackpad_config_t trackpad_config;

const static int8_t FUTABA_SWIPE_THRESHOLD_PIXEL = 20;          // 滑动手势触发的像素阈值
const static uint16_t FUTABA_MAX_GESTURE_ACTIVE_TIME = 1000;    // 手势最大激活时间（毫秒）
const static uint16_t FUTABA_RETAP_WAITING_TIME = 200;          // 双击等待时间（毫秒）
const static uint16_t FUTABA_TAP_STRENGTH_THRESHOLD = 790;      // 强制点击的触摸强度阈值
const static uint16_t FUTABA_MAX_TAP_TIME = 200;               // 轻触判定的最大时间（毫秒）

const static int WAIT_TIME_FOR_CURSOR_MOVEMENT = 100;           // 光标移动等待时间（毫秒）
const static int WAIT_TIME_FOR_MULTI_TAP_CURSOR_MOVEMENT = 200; // 多次点击时光标移动等待时间（毫秒）

#define SCROLL_SCALE_PERCENT 5  // 滚动速度缩放百分比

void reset_trackpad_event(void);

void update_trackpad_config(trackpad_config_t config);
