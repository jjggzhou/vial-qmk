# This file intentionally left blank

POINTING_DEVICE_ENABLE = yes
# MOUSEKEY_ENABLE = yes
POINTING_DEVICE_DRIVER = custom


I2C_DRIVER_REQUIRED = yes
SRC += azoteq_iqs5xx.c
SRC += gr_trackpad65_driver.c

HAPTIC_DRIVER = drv2605l


CONSOLE_ENABLE = yes
