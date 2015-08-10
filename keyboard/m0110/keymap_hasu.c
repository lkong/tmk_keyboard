/*
Copyright 2014 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <stdint.h>
#include "keycode.h"
#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Default:
     * M0110
     * ,---------------------------------------------------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backs|
     * |---------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \|
     * |---------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L| Fn|  '|Return|
     * |---------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,| Fn|Shift   |
     * `---------------------------------------------------------'
     *      |Fn |alt |           Fn                |Gui |Fn |
     *      `-----------------------------------------------'
     */
    [0] = KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,    MINS,EQL, BSPC,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,    LBRC,RBRC,BSLS,
    LCAP,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT,ENT,
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,      RSFT,
    LCTL,LGUI,               FN0,                RGUI, RCTL
        ),
    [1] = KEYMAP(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,
    TRNS,TRNS,TRNS,ESC, TRNS,TRNS,TRNS,HOME,UP,  END, PSCR,SLCK,PAUS,PAUS,
    LCTL,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,LEFT,DOWN,RGHT,TRNS,TRNS,     TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,SPC, PGDN,GRV, FN1, TRNS,APP,           PGUP,
    RALT,TRNS,               TRNS,               TRNS,RALT
    ),

};




/*
 * Fn action definition
 */
const uint16_t fn_actions[] PROGMEM = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [1] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),    // tilde

};
