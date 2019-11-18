/* Copyright 2015-2017 Jack Humbert
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

#include QMK_KEYBOARD_H
#include "muse.h"

enum preonic_layers {
  _QWERTY,
  _COLEMAK,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  LOWER,
  RAISE,
  BACKLIT
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

[_QWERTY] = LAYOUT_preonic_grid( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,  KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC, \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,  KC_U,   KC_I,    KC_O,    KC_P,    KC_DEL,  \
  KC_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,  KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,  KC_M,   KC_COMM, KC_DOT,  KC_SLSH,   KC_ENT,  \
  KC_LCTL, BACKLIT, KC_LGUI, KC_LALT, RAISE, KC_SPC,  KC_SPC,  LOWER,  KC_LEFT, KC_DOWN, KC_UP, KC_RGHT  \
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
[_COLEMAK] = LAYOUT_preonic_grid( \
  KC_GRV,  KC_1,    KC_2,    KC_3,  KC_4,    KC_5,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC, \
  KC_TAB,  KC_Q,    KC_W,    KC_F,  KC_P,    KC_B,    KC_J,    KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_DEL,  \
  KC_ESC,  KC_A,    KC_R,    KC_S,  KC_T,    KC_G,    KC_K,    KC_N,   KC_E,    KC_I,    KC_O,    KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_D,    KC_V,    KC_M,    KC_H,   KC_COMM, KC_DOT,  KC_SLSH,   KC_ENT,  \
  KC_LCTL, BACKLIT, KC_LGUI, KC_LALT, RAISE, KC_SPC,  KC_SPC,  LOWER,  KC_LEFT, KC_DOWN, KC_UP, KC_RGHT  \
),

/* RAISE
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │  F1  │  F2  │  F3  │  F4  │  F5  │  F6  │  F7  │  F8  │  F9  │  F10 │  F11 │  F12 │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │      │  -   │  =   │PrtScn│
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │  End │ PgUp │  [   │  ]   │  \   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │ Home │ PgDn │      │ Prev │ Play │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │ Mute │ Vol- │ Vol+ │ Next │
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */

[_RAISE] = LAYOUT_preonic_grid( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12, \
  _______, RGB_TOG, RGB_MOD, _______, RGB_MODE_PLAIN, _______, _______, _______, KC_PGUP,  KC_MINS, KC_EQL,  KC_PSCR,  \
  _______, RGB_VAI, RGB_HUI, RGB_SAI, RGB_MODE_RAINBOW, _______, _______, _______, KC_PGDN,  KC_LBRC, KC_RBRC, KC_BSLS, \
  _______, RGB_VAD, RGB_HUD, RGB_SAD, _______, _______, _______, KC_MUTE, _______,  KC_HOME, KC_END, KC_MPLY, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MPRV,  KC_VOLD, KC_VOLU, KC_MNXT \
),

[_LOWER] = LAYOUT_preonic_grid( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12, \
  _______, RGB_TOG, RGB_MOD, _______, _______, _______, _______, _______, KC_PGUP,  KC_MINS, KC_EQL,  KC_PSCR,  \
  _______, RGB_VAI, RGB_HUI, RGB_SAI, _______, _______, _______, _______, KC_PGDN,  KC_LBRC, KC_RBRC, KC_BSLS, \
  _______, RGB_VAD, RGB_HUD, RGB_SAD, _______, _______, _______, KC_MUTE, _______,  KC_HOME, KC_END,  KC_MPLY, \
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

[_ADJUST] = LAYOUT_preonic_grid( \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_CALC, KC_PSLS, KC_PAST, KC_PMNS, \
  _______, RESET,   DEBUG,   QWERTY,  COLEMAK, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,  \
  _______, BACKLIT, MU_MOD,  AU_ON,   AU_OFF,  _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, \
  _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,    MI_OFF, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_P0,   KC_P0,   KC_PDOT, KC_PENT \
)
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        case COLEMAK:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_COLEMAK);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
            // TG(_LOWER);
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
        case BACKLIT:
        //   if (record->event.pressed) {
        //     register_code(KC_RSFT);
        //     #ifdef RGBLIGHT_ENABLE
        //       backlight_step();
        //     #endif
        //     #ifdef __AVR__
        //     writePinLow(E6);
        //     #endif
        //   } else {
        //     unregister_code(KC_RSFT);
        //     #ifdef __AVR__
        //     writePinHigh(E6);
        //     #endif
        //   }
          return false;
          break;
      }
    return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      register_code(KC_PGDN);
      unregister_code(KC_PGDN);
    } else {
      register_code(KC_PGUP);
      unregister_code(KC_PGUP);
    }
  }
}

void dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
}


void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}

const uint8_t RGBLED_BREATHING_INTERVALS[] PROGMEM = {255, 128, 64, 32};
const uint8_t RGBLED_RAINBOW_MOOD_INTERVALS[] PROGMEM = {255, 128, 64};
