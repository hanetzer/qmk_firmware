# MCU name
MCU = LPC11U35

BOOTLOADER = kiibohd

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
SLEEP_LED_ENABLE = no
NKRO_ENABLE = yes
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
MIDI_ENABLE = no
BLUETOOTH_ENABLE = no
AUDIO_ENABLE = no

CUSTOM_MATRIX = lite
SRC += matrix.c

LAYOUTS = fullsize_ansi
