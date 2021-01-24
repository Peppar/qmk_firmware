#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_us_international.h"
#include "timer.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL

#define US_OE   ALGR(US_K)    // Not working...

enum custom_keycodes {
    RGB_SLD = EZ_SAFE_RANGE,
    USR_SQUOT,
    USR_DQOT,
    USR_TILD,
    USR_GRV,
    USR_CIRC,
    USR_UGRV,
    USR_EGRV,
    USR_AGRV,
    USR_CAPS,
    USR_MEH,
    USR_LLAYER,
    USR_LED,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_PAUSE,    US_CIRC,         US_EACU,  US_UNDS,   USR_SQUOT,  KC_SCROLLLOCK,  USR_CAPS,   _______,  US_DQUO,  USR_EGRV,   US_MINS,   US_CCED,         USR_AGRV,       USR_UGRV,
    KC_ESCAPE,   US_Q,            US_W,     US_E,      US_R,       US_T,           KC_DELETE,  TG(4),    US_Y,     US_U,       US_I,      US_O,            US_P,           US_ARNG,
    KC_RCTRL,    US_A,            US_S,     US_D,      US_F,       US_G,                                 US_H,     US_J,       US_K,      US_L,            US_ODIA,        US_ADIA,
    KC_LSHIFT,   US_Z,            US_X,     US_C,      US_V,       US_B,           KC_TAB,     _______,  US_N,     US_M,       US_COMM,   US_DOT,          US_SCLN,        KC_RSHIFT,
    _______,     KC_APPLICATION,  KC_LGUI,  KC_LALT,   USR_LLAYER,                                                 MO(2),      MO(3),     _______,         _______,        _______,
                                                                      KC_INSERT,  KC_PSCREEN,  _______,  _______,
                                                                                  KC_MS_BTN5,  _______,
                                                            KC_SPACE,  KC_ENTER,  KC_MS_BTN4,  _______,  _______,  KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  XXXXXXX,  XXXXXXX,   US_SLSH,  US_ASTR,  XXXXXXX,      _______,
    _______,  USR_GRV,  US_LPRN,  US_RPRN,  US_AMPR,  US_HASH,   _______,  _______,  XXXXXXX,  US_7,      US_8,     US_9,     US_MINS,      _______,
    _______,  US_LCBR,  US_RCBR,  US_LBRC,  US_RBRC,  US_PIPE,                       XXXXXXX,  US_4,      US_5,     US_6,     US_PLUS,      _______,
    _______,  US_LABK,  US_RABK,  US_BSLS,  US_SLSH,  USR_CIRC,  _______,  _______,  XXXXXXX,  US_1,      US_2,     US_3,     KC_KP_ENTER,  _______,
    _______,  _______,  _______,  _______,  _______,                                           US_0,      XXXXXXX,  US_DOT,   XXXXXXX,      _______,
                                                      _______,  _______,  _______,  _______,
                                                                _______,  _______,
                                            _______,  _______,  _______,  _______,  _______,  _______
  ),
  [2] = LAYOUT_ergodox_pretty(
    _______,  _______,   _______,  _______,  _______,   _______,  _______,  _______,  _______,            _______,    _______,    _______,  _______,   RESET,
    _______,  USR_TILD,  US_LDAQ,  US_RDAQ,  USR_DQOT,  US_AT,    _______,  _______,  KC_AUDIO_VOL_UP,    USR_LED,    KC_PGDOWN,  KC_PGUP,  XXXXXXX,   KC_BRIGHTNESS_UP,
    _______,  US_EQL,    US_PLUS,  US_ASTR,  US_COLN,   US_DLR,                       KC_AUDIO_VOL_DOWN,  KC_LEFT,    KC_DOWN,    KC_UP,    KC_RIGHT,  KC_BRIGHTNESS_DOWN,
    _______,  US_AE,     US_EURO,  US_QUES,  US_EXLM,   US_PERC,  _______,  _______,  KC_AUDIO_MUTE,      XXXXXXX,    KC_END,     KC_HOME,  XXXXXXX,   _______,
    _______,  _______,   _______,  _______,  _______,                                                     _______,    _______,    _______,  _______,   _______,
                                                                                       _______,  _______,  _______,  _______,
                                                                                                 _______,  _______,
                                                                             _______,  _______,  _______,  _______,  _______,  _______
  ),
  [3] = LAYOUT_ergodox_pretty(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  XXXXXXX,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    _______,
    _______,  _______,  _______,  _______,  _______,  _______,                      XXXXXXX,  KC_F5,    KC_F6,    KC_F7,    KC_F8,    _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  XXXXXXX,  KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,
    _______,  _______,  _______,  _______,  _______,                                          _______,  _______,  _______,  _______,  _______,
                                                      _______,  _______,  _______,  _______,
                                                                _______,  _______,
                                            _______,  _______,  _______,  _______,  _______,  _______
  ),
  [4] = LAYOUT_ergodox_pretty(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  XXXXXXX,  XXXXXXX,   US_SLSH,  US_ASTR,  XXXXXXX,      _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  XXXXXXX,  US_7,      US_8,     US_9,     US_MINS,      _______,
    _______,  _______,  _______,  _______,  _______,  _______,                      XXXXXXX,  US_4,      US_5,     US_6,     US_PLUS,      _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  XXXXXXX,  US_1,      US_2,     US_3,     KC_KP_ENTER,  _______,
    _______,  _______,  _______,  _______,  _______,                                          US_0,      XXXXXXX,  US_DOT,   XXXXXXX,      _______,
                                                      _______,  _______,  _______,  _______,
                                                                _______,  _______,
                                            _______,  _______,  _______,  _______,  _______,  _______
  ),
};

static void tap_dead_key(uint16_t keycode) {
    bool leftShiftPressed  = (keyboard_report->mods & MOD_BIT(KC_LSFT)) != 0;
    bool rightShiftPressed = (keyboard_report->mods & MOD_BIT(KC_RSFT)) != 0;
    if (leftShiftPressed) {
        unregister_code16(KC_LSHIFT);
    }
    if (rightShiftPressed) {
        unregister_code16(KC_RSHIFT);
    }
    register_code16(keycode);
    unregister_code16(keycode);
    if (leftShiftPressed) {
        register_code16(KC_LSHIFT);
    }
    if (rightShiftPressed) {
        register_code16(KC_RSHIFT);
    }
}

static void tap_composed_key(uint16_t deadkey, uint16_t latinkey) {
    tap_dead_key(deadkey);
    register_code16(latinkey);
    unregister_code16(latinkey);
}

static struct {
    uint16_t last_keycode;
    uint16_t last_time;
    bool last_pressed;
    bool llayer_doubletapped;
    bool llayer_repeating;
    bool suppress_leds;
} usr_state;

void keyboard_post_init_user(void) {
    memset(&usr_state, 0, sizeof(usr_state));

    // The green led looks brighter at equivalent OCR1 value
    ergodox_right_led_1_set(20);
    ergodox_right_led_2_set(10);
    ergodox_right_led_3_set(20);
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    usr_state.llayer_doubletapped = false;

    switch (keycode) {
        case USR_SQUOT:
            if (record->event.pressed) {
                register_code16(US_QUOT);
                unregister_code16(US_QUOT);
                register_code16(KC_SPACE);
                unregister_code16(KC_SPACE);
            }
            break;
        case USR_DQOT:
            if (record->event.pressed) {
                register_code16(US_DQUO);
                unregister_code16(US_DQUO);
                register_code16(KC_SPACE);
                unregister_code16(KC_SPACE);
            }
            break;
        case USR_TILD:
            if (record->event.pressed) {
                register_code16(US_TILD);
                unregister_code16(US_TILD);
                register_code16(KC_SPACE);
                unregister_code16(KC_SPACE);
            }
            break;
        case USR_GRV:
            if (record->event.pressed) {
                register_code16(US_GRV);
                unregister_code16(US_GRV);
                register_code16(KC_SPACE);
                unregister_code16(KC_SPACE);
            }
            break;
        case USR_CIRC:
            if (record->event.pressed) {
                register_code16(US_CIRC);
                unregister_code16(US_CIRC);
                register_code16(KC_SPACE);
                unregister_code16(KC_SPACE);
            }
            break;
        case USR_UGRV:
            if (record->event.pressed) {
                tap_composed_key(US_GRV, US_U);
            }
            break;
        case USR_EGRV:
            if (record->event.pressed) {
                tap_composed_key(US_GRV, US_E);
            }
            break;
        case USR_AGRV:
            if (record->event.pressed) {
                tap_composed_key(US_GRV, US_A);
            }
            break;
        case USR_CAPS:
            if (record->event.pressed) {
                register_code16(KC_CAPSLOCK);
                unregister_code16(KC_CAPSLOCK);
                register_code16(KC_LCTRL);
                unregister_code16(KC_LCTRL);
            }
            break;
        case USR_MEH:
            if (record->event.pressed) {
                register_code16(KC_LSHIFT);
                register_code16(KC_LALT);
                register_code16(KC_RCTRL);
            } else {
                unregister_code16(KC_LSHIFT);
                unregister_code16(KC_LALT);
                unregister_code16(KC_RCTRL);
            }
            break;
        case USR_LLAYER:
            if (record->event.pressed) {
                layer_on(1);
                usr_state.llayer_doubletapped = usr_state.last_keycode == USR_LLAYER
                    && TIMER_DIFF_16(record->event.time, usr_state.last_time) < TAPPING_TERM;
            } else {
                if (usr_state.llayer_repeating) {
                    unregister_code16(KC_BSPACE);
                    usr_state.llayer_repeating = false;
                } else {
                    if (usr_state.last_keycode == USR_LLAYER && TIMER_DIFF_16(record->event.time, usr_state.last_time) < TAPPING_TERM) {
                        register_code16(KC_BSPACE);
                        unregister_code16(KC_BSPACE);
                    }
                }
                layer_off(1);
            }
            break;
        case USR_LED:
            if (record->event.pressed) {
                usr_state.suppress_leds = !usr_state.suppress_leds;
            }
            break;
    }

    usr_state.last_time = record->event.time;
    usr_state.last_keycode = keycode;
    usr_state.last_pressed = record->event.pressed;

    return true;
}

void matrix_scan_user(void) {
    if (usr_state.llayer_doubletapped && TIMER_DIFF_16(timer_read(), usr_state.last_time) > TAPPING_TERM) {
        usr_state.llayer_doubletapped = false;
        usr_state.llayer_repeating = true;
        register_code16(KC_BSPACE);
    }
}

uint32_t layer_state_set_user(uint32_t state) {
    uint8_t layer = biton32(state);
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    if (!usr_state.suppress_leds) {
        switch (layer) {
            case 1:
                ergodox_right_led_1_on();
                break;
            case 2:
                ergodox_right_led_2_on();
                break;
            case 3:
                ergodox_right_led_3_on();
                break;
            case 4:
                ergodox_right_led_1_on();
                ergodox_right_led_2_on();
                break;
            case 5:
                ergodox_right_led_1_on();
                ergodox_right_led_3_on();
                break;
            case 6:
                ergodox_right_led_2_on();
                ergodox_right_led_3_on();
                break;
            case 7:
                ergodox_right_led_1_on();
                ergodox_right_led_2_on();
                ergodox_right_led_3_on();
                break;
            default:
                break;
        }
    }
    return state;
};
