#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_PLUS,                                        ST_MACRO_0,     KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_DELETE,                                      MO(2),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_GRAVE,       KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_HYPR,                                                                        ST_MACRO_1,     KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           MT(MOD_LALT, KC_B),                                KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(1),          KC_MEDIA_PLAY_PAUSE,                                                                                                KC_F8,          MO(1),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_CTRL,  
    KC_SPACE,       KC_LEFT_GUI,    KC_LEFT_CTRL,                   KC_RIGHT_SHIFT, KC_ENTER,       KC_BSPC
  ),
  [1] = LAYOUT_moonlander(
    KC_HOME,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_COLN,        KC_PLUS,        KC_EQUAL,       KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDN,        KC_TRANSPARENT, KC_PLUS,        KC_EQUAL,       ST_MACRO_3,     KC_TRANSPARENT, KC_F12,         
    KC_SCLN,        ST_MACRO_2,     KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_LBRC,        KC_RBRC,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,MO(2),          
    KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_FORWARD,                                                                                                RGB_TOG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_CAPS,                        CW_TOGG,        RGB_VAD,        RGB_VAI
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MU_TOGG,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, MU_NEXT,                                        KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, QK_MUSIC_OFF,                                                                   KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221}, {211,47,221} },

    [1] = { {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227}, {151,97,227} },

    [2] = { {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255}, {74,93,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_G)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_A)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_O)));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}



