LAYOUTS = 66_ansi 66_iso
MCU = atmega32u4
F_CPU = 16000000
ARCH = AVR8
F_USB = $(F_CPU)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT
OPT_DEFS += -DBOOTLOADER_SIZE=4096


# Build Options
BACKLIGHT_ENABLE = no
BOOTMAGIC_ENABLE = no 	# Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE = yes   # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes 	# Audio control and System control(+450)
CONSOLE_ENABLE = yes  	# Console for debug(+400)
COMMAND_ENABLE = no     # Commands for debug and configuration
NKRO_ENABLE = yes		    # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
AUDIO_ENABLE = no
RGBLIGHT_ENABLE = no   # Enable keyboard underlight functionality
MIDI_ENABLE = no 		    # MIDI controls
UNICODE_ENABLE = yes 		# Unicode
BLUETOOTH_ENABLE = no   # Enable Bluetooth with the Adafruit EZ-Key HID
