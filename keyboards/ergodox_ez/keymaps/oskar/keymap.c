#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_bepo.h"

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

#define BP_SQUOT ALGR(BP_COMM) // '

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  USR_ARING,
  USR_ADIAE,
  USR_ODIAE,
  USR_CAPS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_PSCREEN,  BP_BSLS,  BP_ECUT,  BP_DCRC,   BP_SLSH,  BP_UNDS,  KC_INSERT,  KC_SCROLLLOCK,  BP_DTRM,  BP_EGRV,    BP_MINS,   BP_CCED,         BP_AGRV,        BP_UGRV,
    KC_PAUSE,    BP_Q,     BP_W,     BP_E,      BP_R,     BP_T,     KC_DELETE,  KC_TAB,         BP_Y,     BP_U,       BP_I,      BP_O,            BP_P,           USR_ARING,
    KC_ESCAPE,   BP_A,     BP_S,     BP_D,      BP_F,     BP_G,                                 BP_H,     BP_J,       BP_K,      BP_L,            USR_ODIAE,      USR_ADIAE,
    USR_CAPS,    BP_Z,     BP_X,     BP_C,      BP_V,     BP_B,     MO(2),      MO(3),          BP_N,     BP_M,       BP_COMM,   BP_DOT,          BP_SCLN,        BP_SQUOT,
    _______,     _______,  _______,  KC_RCTRL,  KC_LSHIFT,                                                KC_RSHIFT,  KC_RCTRL,  KC_APPLICATION,  _______,        _______,
                                                            KC_LALT,  KC_LGUI,  KC_RGUI,  KC_LALT,
                                                                      KC_HOME,  KC_PGUP,
                                                KC_SPACE,  KC_BSPACE,  KC_END,  KC_PGDOWN,  MO(1),  KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    _______,  _______,  KC_F6,    KC_F7,    KC_F8,     KC_F9,    KC_F10,   KC_F11,
    _______,  BP_EXLM,  BP_AT,    BP_HASH,  BP_DLR,   BP_PERC,  _______,  _______,  BP_CIRC,  BP_AMPR,  BP_TILD,   BP_EQL,   BP_ASTR,  KC_F12,
    _______,  BP_LCBR,  BP_RCBR,  BP_LPRN,  BP_RPRN,  BP_EURO,                      BP_PIPE,  BP_LBRC,  BP_RBRC,   BP_LESS,  BP_GRTR,  _______,
    _______,  BP_MDSH,  BP_NDSH,  BP_LGIL,  BP_RGIL,  BP_OE,    _______,  _______,  BP_AE,    BP_DQOT,  BP_GRV,    BP_QEST,  BP_COLN,  _______,
    _______,  _______,  _______,  _______,  _______,                                           _______,      _______,       _______,      _______,      _______,
                                                      _______,  _______,  _______,  _______,
                                                                _______,  _______,
                                            _______,  _______,  _______,  _______,  _______,  _______
  ),
  [2] = LAYOUT_ergodox_pretty(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   BP_SLSH,  BP_ASTR,  _______,      _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  BP_7,      BP_8,     BP_9,     BP_MINS,      _______,
    _______,  _______,  _______,  _______,  _______,  _______,                      _______,  BP_4,      BP_5,     BP_6,     BP_PLUS,      _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  BP_1,      BP_2,     BP_3,     KC_KP_ENTER,  _______,
    _______,  _______,  _______,  _______,  _______,                                          BP_0,      _______,  BP_DOT,   _______,      _______,
                                                      _______,  _______,  _______,  _______,
                                                                _______,  _______,
                                            _______,  _______,  _______,  _______,  _______,  _______
  ),
  [3] = LAYOUT_ergodox_pretty(
    _______,  _______,        _______,        _______,      _______,         _______,            _______,  _______,  _______,             _______,    _______,    _______,  _______,   RESET,
    _______,  KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,  KC_MS_WH_RIGHT,  KC_AUDIO_VOL_UP,    _______,  _______,  KC_BRIGHTNESS_UP,    LED_LEVEL,  KC_PGDOWN,  KC_PGUP,  _______,   _______,
    _______,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,     KC_MS_RIGHT,     KC_AUDIO_VOL_DOWN,                      KC_BRIGHTNESS_DOWN,  KC_LEFT,    KC_DOWN,    KC_UP,    KC_RIGHT,  _______,
    _______,  _______,        _______,        KC_WWW_BACK,  KC_WWW_FORWARD,  KC_AUDIO_MUTE,      _______,  _______,  _______,             _______,    _______,    _______,  _______,   _______,
    _______,  _______,        _______,        _______,      _______,                                                                      _______,    _______,    _______,  _______,   _______,
                                                                                       _______,  _______,  _______,  _______,
                                                                                                 _______,  _______,
                                                          KC_MS_BTN1,  KC_MS_BTN2,  KC_MS_BTN3,  _______,  _______,  _______
  ),
};

static void tap_dead_key(uint16_t keycode) {
  bool leftShiftPressed = (keyboard_report->mods & MOD_BIT(KC_LSFT)) != 0;
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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case USR_ARING:
      if (record->event.pressed) {
        tap_composed_key(BP_RNGA, BP_A);
      }
      break;
    case USR_ADIAE:
      if (record->event.pressed) {
        tap_composed_key(BP_DTRM, BP_A);
      }
      break;
    case USR_ODIAE:
      if (record->event.pressed) {
        tap_composed_key(BP_DTRM, BP_O);
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
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
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
  return state;
};

void matrix_init_user(void) {
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  keyboard_config.led_level = 0;
};
