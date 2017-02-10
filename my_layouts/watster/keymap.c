// WATSTER LAYOUT

#include "planck.h"
#include "action_layer.h"
#ifdef AUDIO_ENABLE
  #include "audio.h"
#endif
#ifdef BACKLIGHT_ENABLE
  #include "backlight.h"
#endif
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _WAT 0
#define _STER 1

enum planck_keycodes {
  WAT,
  STER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_WAT] = {
  {WAT,  WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT},
  {WAT,  WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT},
  {WAT,  WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT},
  {WAT,  WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT, WAT}
},

[_STER] = {
  {STER,  STER, STER, STER, STER, STER, STER, STER, STER, STER, STER, STER},
  {STER,  STER, STER, STER, STER, STER, STER, STER, STER, STER, STER, STER},
  {STER,  STER, STER, STER, STER, STER, STER, STER, STER, STER, STER, STER},
  {STER,  STER, STER, STER, STER, STER, STER, STER, STER, STER, STER, STER}
}
};


// Enable these functions using FUNC(n) macro.
const uint16_t PROGMEM fn_actions[] = {
  // [1] = SEND_STRING(":/");
};

void persistant_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case WAT:
      if (record->event.pressed) {
        SEND_STRING(":/ ");
        persistant_default_layer_set(1UL<<_STER);
      }
      return false;
      break;
    case STER:
      if (record->event.pressed) {
        SEND_STRING("STER");
        persistant_default_layer_set(1UL<<_WAT);
      }
      return false;
      break;
  }
  return true;
}
