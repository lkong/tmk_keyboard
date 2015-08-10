#include "keymap_common.h"
#include "keyboard.h"
#include "action_layer.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     * ,---------------------------------------------------------------------------------------------------------------.
     * |Esc| | F1| F2| F3| F4|  |F5| F6| F7| F8|  |F9| F10| F11| F12|   PSCR|  SCRL|  PAUS|                            |
     * |---------------------------------------------------------------------------------------------------------------|
     * |---------------------------------------------------------------------------------------------------------------|
     * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| * Bspc|     INS|  HOME|  PGUP|    NLCK| PSLS| PAST| PMNS| |
     * |---------------------------------------------------------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|     DEL|   END|  PGDN|     P7|   P8|   P9| |PPLS| |
     * |--------------------------------------------------------------------------------------------------------|    |-|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|* Return|                            P4|   P5|   P6| |  * |-|
     * |---------------------------------------------------------------------------------------------------------------|
     * |Shift * |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| *   Shift|            UP |            P1|   P2|   P3| |PENT|-|
     * |--------------------------------------------------------------------------------------------------------|    |-|
     * |Ctrl|    |Alt |            Space          |Alt |    |Ctrl  |    LEFT| DOWN | RIGHT|    | *    P0| PDOT| |  * |-|
     * `---------------------------------------------------------------------------------------------------------------'
     */
    KEYMAP( \
        ESC,        F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,   F9,   F10,   F11,   F12,         PSCR,  SLCK, PAUS, \
        GRV,  1,    2,   3,   4,   5,   6,   7,   8,   9,    0,    MINS,  EQL,   BSLS, BSPC,  INS,   HOME, PGUP,        NLCK, PSLS,  PAST, PMNS, \
        TAB,  Q,    W,   E,   R,   T,   Y,   U,   I,   O,    P,    LBRC,  RBRC,  BSLS,        DEL,   END,  PGDN,        P7,   P8,    P9,   PPLS, \
        CAPS, A,    S,   D,   F,   G,   H,   J,   K,   L,    SCLN, QUOT,  BSLS,  ENT,                                   P4,   P5,    P6, \
        LSFT, NUBS, Z,   X,   C,   V,   B,   N,   M,   COMM, DOT,  SLSH,  RSFT,  RSFT,               UP,                P1,   P2,    P3,   PENT, \
        LCTL,       LALT,                    SPC,                  RALT,         RCTL,        LEFT,  DOWN, RIGHT,             P0,    PDOT) ,

    KEYMAP( \
        TRNS,       TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS,  TRNS,  TRNS,        TRNS,  TRNS, TRNS, \
        TRNS, TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS,  TRNS,  TRNS, TRNS,  TRNS,  TRNS, TRNS,        TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS,  TRNS,  TRNS,        TRNS,  TRNS, TRNS,        TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS,  TRNS,  TRNS,                                  TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS,  TRNS,  TRNS,               TRNS,              TRNS, TRNS, TRNS, TRNS, \
        TRNS,       TRNS,                    TRNS,                 TRNS,         TRNS,        TRNS,  TRNS, TRNS,              TRNS, TRNS)

};

const uint16_t PROGMEM fn_actions[] = {
};
