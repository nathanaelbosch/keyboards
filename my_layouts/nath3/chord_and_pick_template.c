// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "planck.h"
#ifdef BACKLIGHT_ENABLE
  #include "backlight.h"
#endif

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _AR 1
#define _SM 2
#define _DG 3
#define _FK 4
#define _VI 5
#define _PW 6
#define _SA 7

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QW] = { /* Qwerty */
  {F(27),    KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_EQL},
  {KC_CAPS,  F(28),    F(29),    F(31),    F(23),    KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT},
  {F(11),    F(32),    KC_X,     KC_C,     F(24),    KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  F(15) },
  {KC_LGUI,  KC_LCTL,  KC_LALT,  F(23),    KC_BSPC,  KC_ENT,   KC_ENT,   KC_SPC,   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT}
},
[_AR] = { /* Arrows */
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGDN,  KC_PGUP,  KC_TRNS,  KC_TRNS,  M(0)},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_TRNS,  KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_END,   KC_TRNS,  KC_TRNS,  KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
},
[_SM] = { /* Symbols */
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BSLS,  F(7),     F(8),     F(9),     KC_TRNS,  KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MINS,  F(4),     F(5),     F(6),     KC_LBRC,  KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  F(52),    F(1),     F(2),     F(3),     KC_RBRC,  KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  F(10),    F(53),    F(54),    KC_TRNS,  KC_TRNS}
},
[_DG] = { /* Digits */
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NLCK,  KC_P7,    KC_P8,    KC_P9,    KC_PAST,  KC_PGUP},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_P4,    KC_P5,    KC_P6,    KC_PMNS,  KC_PGDN},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  F(21),    KC_P1,    KC_P2,    KC_P3,    KC_PPLS,  KC_PENT},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_P0,    KC_PDOT,  KC_SLSH,  KC_PENT,  KC_PENT}
},
[_FK] = { /* Function */
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_F4,    KC_F5,    KC_F6,    KC_F11,   KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F12,   KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
},
[_VI] = { /* Vim */
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  F(61),    F(64),    F(72),    F(71),    F(62),    KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  F(65),    F(63),    KC_DEL,   F(67),    F(68),    KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BL_1,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
},
[_PW] = { /* Macros */
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  M(1),     M(2),     M(3),     M(4),     M(5),     M(6)},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  M(7),     M(8),     M(9),     M(10),    KC_TRNS,  KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  F(81),    KC_TRNS,  KC_TRNS,  F(80),    RESET}
},
[_SA] = { /* Shifted Arrows */
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGDN,  KC_PGUP,  KC_TRNS,  KC_TRNS,  M(0)},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  LSFT(KC_LEFT),  LSFT(KC_DOWN),  LSFT(KC_UP),    LSFT(KC_RGHT),  KC_TRNS,  KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  LCTL(KC_C),  LCTL(KC_X), LCTL(KC_V),  KC_TRNS,  KC_TRNS},
  {KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
}
};


/* id for user defined functions & macros */
enum function_id {
    TEENSY_KEY,
    CUSTOM_KEY,
    L_CTRL_ALT_ENT,
    R_CTRL_ALT_ENT,
};

enum macro_id {
    BACKLIGHT,
    PASSWORD1,
    PASSWORD2,
    PASSWORD3,
    PASSWORD4,
    PASSWORD5,
    PASSWORD6,
    USERNAME1,
    USERNAME2,
    USERNAME3,
    USERNAME4,
    CTRLTAB,
    ALTTAB,
    DELLINE,
    CAPSLOCK,
};

int CAPSLOCKED = 0;

const uint16_t PROGMEM fn_actions[] = {
    [1]  =  ACTION_MODS_KEY(MOD_LSFT, KC_1),                // FN1  - !
    [2]  =  ACTION_MODS_KEY(MOD_LSFT, KC_2),                // FN2  - @
    [3]  =  ACTION_MODS_KEY(MOD_LSFT, KC_3),                // FN3  - #
    [4]  =  ACTION_MODS_KEY(MOD_LSFT, KC_4),                // FN4  - $
    [5]  =  ACTION_MODS_KEY(MOD_LSFT, KC_5),                // FN5  - %
    [6]  =  ACTION_MODS_KEY(MOD_LSFT, KC_6),                // FN6  - ^
    [7]  =  ACTION_MODS_KEY(MOD_LSFT, KC_7),                // FN7  - &
    [8]  =  ACTION_MODS_KEY(MOD_LSFT, KC_8),                // FN8  - *
    [9]  =  ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN9  - (
    [10] =  ACTION_MODS_KEY(MOD_LSFT, KC_0),               // FN10 - )
 
    [11] =  ACTION_MODS_TAP_KEY(MOD_LSFT, KC_TAB),          // FN11 = LShift with tap Tab
    [12] =  ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN12 = LCtrl  with tap Tilda
    [13] =  ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),             // FN13 = LAlt   with tap Space
    [14] =  ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESC),          // FN14 = NO LONGER IN USE - AVAILABLE
    [15] =  ACTION_MODS_TAP_KEY(MOD_RSFT, KC_BSPC),         // FN9  = RShift with tap backspace
    [16] =  ACTION_MODS_TAP_KEY(MOD_RCTL, KC_SPC),          // FN16 = NO LONGER IN USE - AVAILABLE

    [17] =  ACTION_LAYER_SET(0, ON_BOTH),                   // FN17 - set Layer0
    [18] =  ACTION_LAYER_SET(1, ON_BOTH),                   // FN18 - set Layer1, to use Workman layout at firmware level
    [19] =  ACTION_LAYER_SET(2, ON_BOTH),                   // FN19 - set Layer2, to use with Numpad keys
    [20] =  ACTION_LAYER_MOMENTARY(2),                      // FN20 - NO LONGER IN USE - AVAILABLE
    [21] =  ACTION_MACRO(USERNAME4),                        // FN21 - types Jason Crump because i always typo my own name
    [22] =  ACTION_FUNCTION_TAP(R_CTRL_ALT_ENT),            // FN22 - momentary Layer6+CTRL+ALT on Enter, to use with F* keys on top row + utils
    [23] =  ACTION_LAYER_TAP_KEY(4, KC_F),                  // FN23 - momentary Layer7 on ' , for Macros

    [24] =  ACTION_LAYER_TAP_KEY(5, KC_V),                  // FN24 = momentary Layer4 on Z key, to use with unconvenient keys
    [25] =  ACTION_LAYER_TAP_KEY(3, KC_X),                  // FN25 = momentary Layer3 on X key, to use with F* keys
    [26] =  ACTION_LAYER_TAP_KEY(8, KC_C),                  // FN26 = momentary Layer8 on C key, to use with mouse and navigation keys
    [27] =  ACTION_LAYER_TAP_KEY(6, KC_ESC),                // FN27 = momentary Layer9 on V key, to use with application-specific shortcuts
    [28] =  ACTION_LAYER_TAP_KEY(1, KC_A),                  // FN28 = momentary Layer4 on A key, to use with Arrow keys
    [29] =  ACTION_LAYER_TAP_KEY(2, KC_S),                  // FN29 = momentary Layer3 on S key, to use with Symbols
    [30] =  ACTION_LAYER_TAP_KEY(8, KC_W),                  // FN30 = momentary Layer8 on W key, to use with mouse and navigation keys
    [31] =  ACTION_LAYER_TAP_KEY(3, KC_D),                  // FN31 = momentary Layer2 on D key, to use with Numpad keys
    [32] =  ACTION_LAYER_TAP_KEY(7, KC_Z),                  // FN32 = momentary Layer7 on Z key

    [51] =  ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),             // FN11 = Pipe character
    [52] =  ACTION_MODS_KEY(MOD_LSFT, KC_MINS),             // FN12 = Underscore
    [53] =  ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN13 = Left Brace
    [54] =  ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),             // FN14 = Right Brace
    [55] =  ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),             // FN15 = Single Quote
    [56] =  ACTION_MODS_KEY(MOD_LSFT, KC_EQL),              // FN16 = Plus
    [61] =  ACTION_MODS_KEY(MOD_LCTL, KC_C),                // FN1  = Ctrl C  (Copy)
    [62] =  ACTION_MODS_KEY(MOD_LCTL, KC_V),                // FN2  = Ctrl V  (Paste)
    [63] =  ACTION_MODS_KEY(MOD_LSFT, KC_END),              // FN3  = Select to End of Line
    [64] =  ACTION_MODS_KEY(MOD_LCTL, KC_Z),                // FN4  = Ctrl Z  (Undo)
    [65] =  ACTION_MODS_KEY(MOD_LCTL, KC_X),                // FN5  = Ctrl X  (Cut)
    [66] =  ACTION_MODS_KEY(MOD_LALT, KC_F4),               // FN6  = Alt F4  (Close)
    [67] =  ACTION_MODS_KEY(MOD_LCTL, KC_S),                // FN7  = Ctrl S  (Close)
    [68] =  ACTION_MODS_KEY(MOD_LCTL, KC_P),                // FN8  = Ctrl P  (Close)

    [71] =  ACTION_MODS_KEY(MOD_LCTL, KC_RIGHT),            // FN11 = Next Word
    [72] =  ACTION_MODS_KEY(MOD_LCTL, KC_LEFT),             // FN12 = Previous Word
            
    [80] =  ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_DEL),     //  Ctrl/Alt Delete
    [81] =  ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_PGDN),    //  Ctrl/Shift End
    [90] =  ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [91] =  ACTION_MACRO(CAPSLOCK),
};

#include "keymap_passwords.h"
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case BACKLIGHT:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
        case CAPSLOCK:
          if (record->event.pressed) {
            if (CAPSLOCKED == 1) {
              CAPSLOCKED = 0;
              backlight_set(10);
              return MACRO( I(255), T(CAPS), END  ); 
            } else {
              CAPSLOCKED = 1;
              backlight_set(1);
              return MACRO( I(255), T(CAPS), END  ); 
            }            
          }
        case PASSWORD1:     return MACRO_PASSWORD1;
        case PASSWORD2:     return MACRO_PASSWORD2;
        case PASSWORD3:     return MACRO_PASSWORD3;
        case PASSWORD4:     return MACRO_PASSWORD4;
        case PASSWORD5:     return MACRO_PASSWORD5;
        case PASSWORD6:     return MACRO_PASSWORD6;
        case USERNAME1:     return MACRO_USERNAME1;
        case USERNAME2:     return MACRO_USERNAME2;
        case USERNAME3:     return MACRO_USERNAME3;
        case USERNAME4:     return MACRO_USERNAME4;
      }
    return MACRO_NONE;
};