#include QMK_KEYBOARD_H

// ################### //
// #   TRANSITIONS   # //
// ################### //

/* #define ESC_SYML LT(_SYML, QK_GESC) */
#define ESC_NUM LT(_NUM, QK_GESC)
#define SPC_NAV LT(_NAV, KC_SPC)
/* #define TAB_FUN LT(_FUN, KC_TAB) */
#define TAB_SYMR LT(_SYMR, KC_TAB)

/* #define ENT_SYM LT(_SYM, KC_ENT) // LM(_NUM, MOD_LSFT) */
#define ENT_SYML LT(_SYML, KC_ENT) /* LM(_NUM, MOD_LSFT) */
#define BSP_NUM LT(_NUM, KC_BSPC)
#define DEL_FUN LT(_FUN, KC_DEL)

// ############## //
// #   LAYERS   # //
// ############## //

enum layers {
  _COLEMAK,
  _COLEMAK_HR,

  /* _MIDI, */
  
  _FUN,
  _NUM,

  _SYM,
  _SYML,
  _SYMR,
  _NUMROW,
  
  _NAV,
  _DEBUG
};

// ################# //
// #   TRI-STATE   # //
// ################# //

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _SYML, _SYMR, _NUMROW);
}

void matrix_init_user(void) {
  // fails
  /* default_set_layer(_COLEMAK_HR); */
  /* DF(_COLEMAK_HR); */

  //succeeds
  /* layer_on(_COLEMAK_HR); // Set the default layer */
  set_single_persistent_default_layer(_COLEMAK_HR);
}
