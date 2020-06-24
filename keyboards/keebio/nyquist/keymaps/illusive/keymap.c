#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _COLEMAK 1
#define _LOWER 3
#define _RAISE 4
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │   `  │   1  │   2  │   3  │   4  │   5  │   6  │   7  │   8  │   9  │   0  │ Bksp │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Tab  │   Q  │   W  │   E  │   R  │   T  │   Y  │   U  │   I  │   O  │   P  │  Del │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Esc  │   A  │   S  │   D  │   F  │   G  │   H  │   J  │   K  │   L  │   ;  │   '  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shft │   Z  │   X  │   C  │   V  │   B  │   N  │   M  │   ,  │   .  │   /  │Enter │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │ Light│ Gui  │ Alt  │Raise │    Space    │Lower │ Left │ Down │  Up  │ Right│
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */

[_QWERTY] = LAYOUT( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,  KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC, \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,  KC_U,   KC_I,    KC_O,    KC_P,    KC_DEL,  \
  KC_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,  KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,  KC_M,   KC_COMM, KC_DOT,  KC_SLSH,   KC_ENT,  \
  KC_LCTL, ADJUST, KC_LGUI, KC_LALT, RAISE, KC_SPC,  KC_SPC,  LOWER,  KC_LEFT, KC_DOWN, KC_UP, KC_RGHT  \
),

/* COLEMAK
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │   `  │   1  │   2  │   3  │   4  │   5  │   6  │   7  │   8  │   9  │   0  │ Bksp │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Tab  │   Q  │   W  │   F  │   P  │   B  │   J  │   L  │   U  │   Y  │   ;  │  Del │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Esc  │   A  │   R  │   S  │   T  │   G  │   K  │   N  │   E  │   I  │   O  │   '  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shft │   Z  │   X  │   C  │   D  │   V  │   M  │   H  │   ,  │   .  │   /  │Enter │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │ Light│ Gui  │ Alt  │Raise │    Space    │Lower │ Left │ Down │  Up  │ Right│
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */

[_COLEMAK] = LAYOUT( \
  KC_GRV,  KC_1,    KC_2,    KC_3,  KC_4,    KC_5,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC, \
  KC_TAB,  KC_Q,    KC_W,    KC_F,  KC_P,    KC_B,    KC_J,    KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_DEL,  \
  KC_ESC,  KC_A,    KC_R,    KC_S,  KC_T,    KC_G,    KC_K,    KC_N,   KC_E,    KC_I,    KC_O,    KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_D,    KC_V,    KC_M,    KC_H,   KC_COMM, KC_DOT,  KC_SLSH,   KC_ENT,  \
  KC_LCTL, ADJUST, KC_LGUI, KC_LALT, RAISE, KC_SPC,  KC_SPC,  LOWER,  KC_LEFT, KC_DOWN, KC_UP, KC_RGHT  \
),

/* LOWER
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │  F1  │  F2  │  F3  │  F4  │  F5  │  F6  │  F7  │  F8  │  F9  │  F10 │  F11 │  F12 │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │Ld Tog│ Ld M+│      │ Ld St│      │      │      │ PgUp │  -   │  =   │PrtScn│
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ Ld H+│ Ld S+│ Ld V+│ Ld Rb│      │      │      │ PgDn │  [   │  ]   │  \   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ Ld H-│ Ld S-│ Ld V-│      │      │      │ Mute │      │ Home │  End │ Play │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │ Prev │ Vol- │ Vol+ │ Next │
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */
[_LOWER] = LAYOUT( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12, \
  _______, RGB_TOG, RGB_MOD, _______, RGB_MODE_PLAIN, _______, _______, _______, KC_PGUP,  KC_MINS, KC_EQL,  KC_PSCR,  \
  _______, RGB_HUI, RGB_SAI, RGB_VAI, RGB_MODE_RAINBOW, _______, _______, _______, KC_PGDN,  KC_LBRC, KC_RBRC, KC_BSLS, \
  _______, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, KC_MUTE, _______,  KC_HOME, KC_END, KC_MPLY, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MPRV,  KC_VOLD, KC_VOLU, KC_MNXT \
),

/* RAISE
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │  F1  │  F2  │  F3  │  F4  │  F5  │  F6  │  F7  │  F8  │  F9  │  F10 │  F11 │  F12 │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │Ld Tog│ Ld M+│      │ Ld St│      │      │      │ PgUp │  -   │  =   │PrtScn│
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ Ld H+│ Ld S+│ Ld V+│ Ld Rb│      │      │      │ PgDn │  [   │  ]   │  \   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ Ld H-│ Ld S-│ Ld V-│      │      │      │ Mute │      │ Home │  End │ Play │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │ Prev │ Vol- │ Vol+ │ Next │
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */


[_RAISE] = LAYOUT( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12, \
  _______, RGB_TOG, RGB_MOD, _______, RGB_MODE_PLAIN, _______, _______, _______, KC_PGUP,  KC_MINS, KC_EQL,  KC_PSCR,  \
  _______, RGB_HUI, RGB_SAI, RGB_VAI, RGB_MODE_RAINBOW, _______, _______, _______, KC_PGDN,  KC_LBRC, KC_RBRC, KC_BSLS, \
  _______, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, KC_MUTE, _______,  KC_HOME, KC_END, KC_MPLY, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MPRV,  KC_VOLD, KC_VOLU, KC_MNXT \
),

/* ADJUST
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │      │      │      │      │      │      │      │ Calc │   /  │   *  │  -   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ Reset│ Debug│Qwerty│Colmak│      │      │      │  7   │  8   │  9   │   +  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ Light│Mu Mod│Au On │Au Off│      │      │      │  4   │  5   │  6   │   +  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │Voice-│Voice+│Mu On │Mu Off│Mi On │Mi Off│      │  1   │  2   │  3   │ Entr │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │  0   │  0   │   .  │ Entr │
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */

[_ADJUST] =  LAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_CALC, KC_PSLS, KC_PAST, KC_PMNS, \
  _______, RESET,   DEBUG,   QWERTY,  COLEMAK, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,  \
  _______, _______, MU_MOD,  AU_ON,   AU_OFF,  _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, \
  _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,    MI_OFF, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_P0,   KC_P0,   KC_PDOT, KC_PENT \
)

};

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
float tone_colemak[][2]    = SONG(COLEMAK_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
      break;
    case COLEMAK:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_colemak);
        #endif
        persistent_default_layer_set(1UL<<_COLEMAK);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
