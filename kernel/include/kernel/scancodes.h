#ifndef __SCAN_CODES_H__
#define __SCAN_CODES_H__ 1

#include <stdint.h>

#define KEY_CODE_ESCAPE 0x01
#define KEY_CODE_1 0x02
#define KEY_CODE_2 0x03
#define KEY_CODE_3 0x04
#define KEY_CODE_4 0x05
#define KEY_CODE_5 0x06
#define KEY_CODE_6 0x07
#define KEY_CODE_7 0x08
#define KEY_CODE_8 0x09
#define KEY_CODE_9 0x0A
#define KEY_CODE_0 0x0B
#define KEY_CODE_MINUS 0x0C
#define KEY_CODE_EQUAL_SIGN 0x0D
#define KEY_CODE_BACKSPACE 0x0E
#define KEY_CODE_TAB 0x0F
#define KEY_CODE_Q 0x10
#define KEY_CODE_W 0x11
#define KEY_CODE_E 0x12
#define KEY_CODE_R 0x13
#define KEY_CODE_T 0x14
#define KEY_CODE_Y 0x15
#define KEY_CODE_U 0x16
#define KEY_CODE_I 0x17
#define KEY_CODE_O 0x18
#define KEY_CODE_P 0x19
#define KEY_CODE_BRACKET_OPEN 0x1A
#define KEY_CODE_BRACKET_CLOSE 0x1B
#define KEY_CODE_ENTER 0x1C
#define KEY_CODE_LEFT_CTRL 0x1D
#define KEY_CODE_A 0x1E
#define KEY_CODE_S 0x1F
#define KEY_CODE_D 0x20
#define KEY_CODE_F 0x21
#define KEY_CODE_G 0x22
#define KEY_CODE_H 0x23
#define KEY_CODE_J 0x24
#define KEY_CODE_K 0x25
#define KEY_CODE_L 0x26
#define KEY_CODE_SEMICOLON 0x27
#define KEY_CODE_SINGLE_QUOTE 0x28
#define KEY_CODE_BACK_TICK 0x29
#define KEY_CODE_LEFT_SHIFT 0x2A
#define KEY_CODE_BACKSLASH 0x2B
#define KEY_CODE_Z 0x2C
#define KEY_CODE_X 0x2D
#define KEY_CODE_C 0x2E
#define KEY_CODE_V 0x2F
#define KEY_CODE_B 0x30
#define KEY_CODE_N 0x31
#define KEY_CODE_M 0x32
#define KEY_CODE_COMMA 0x33
#define KEY_CODE_DOT 0x34
#define KEY_CODE_FORWARD_SLASH 0x35
#define KEY_CODE_RIGHT_SHIFT 0x36
#define KEY_CODE_ASTERISK 0x37
#define KEY_CODE_LEFT_ALT 0x38
#define KEY_CODE_SPACE 0x39
#define KEY_CODE_CAPS_LOCK 0x3A
#define KEY_CODE_F1 0x3B
#define KEY_CODE_F2 0x3C
#define KEY_CODE_F3 0x3D
#define KEY_CODE_F4 0x3E
#define KEY_CODE_F5 0x3F
#define KEY_CODE_F6 0x40
#define KEY_CODE_F7 0x41
#define KEY_CODE_F8 0x42
#define KEY_CODE_F9 0x43
#define KEY_CODE_F10 0x44
#define KEY_CODE_NUM_LOCK 0x45
#define KEY_CODE_SCROLL_LOCK 0x46
#define KEY_CODE_KEYPAD_7 0x47
#define KEY_CODE_KEYPAD_8 0x48
#define KEY_CODE_KEYPAD_9 0x49
#define KEY_CODE_KEYPAD_MINUS 0x4A
#define KEY_CODE_KEYPAD_4 0x4B
#define KEY_CODE_KEYPAD_5 0x4C
#define KEY_CODE_KEYPAD_6 0x4D
#define KEY_CODE_KEYPAD_PLUS 0x4E
#define KEY_CODE_KEYPAD_1 0x4F
#define KEY_CODE_KEYPAD_2 0x50
#define KEY_CODE_KEYPAD_3 0x51
#define KEY_CODE_KEYPAD_0 0x52
#define KEY_CODE_KEYPAD_DOT 0x53
#define KEY_CODE_F11 0x54
#define KEY_CODE_F12 0x55
#define KEY_CODE_KEYPAD_ENTER 0x56
#define KEY_CODE_RIGHT_CONTROL 0x57
#define KEY_CODE_KEYPAD_FORWARD_SLASH 0x58
#define KEY_CODE_RIGHT_ALT 0x59
#define KEY_CODE_HOME 0x5A
#define KEY_CODE_UP 0x5B
#define KEY_CODE_PAGE_UP 0x5C
#define KEY_CODE_LEFT 0x5D
#define KEY_CODE_RIGHT 0x5E
#define KEY_CODE_END 0x5F
#define KEY_CODE_DOWN 0x60
#define KEY_CODE_PAGE_DOWN 0x61
#define KEY_CODE_INSERT 0x62
#define KEY_CODE_DELETE 0x63
#define KEY_CODE_LEFT_GUI 0x64
#define KEY_CODE_RIGHT_GUI 0x65
#define KEY_CODE_APPS 0x66
#define KEY_CODE_PAUSE 0x67
#define KEY_CODE_PRINT_SCREEN 0x68


#define KEY_RELEASED_FLAG 0x80

extern uint8_t *scan_code_set1[];

extern char char_list_en[];

#define NR_SCAN_CODES_SET_1 206

uint8_t get_key_code();

#endif