#include QMK_KEYBOARD_H
#include "aliases_ahk.h"

#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 5000

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift and Retro Shift (Auto Shift for Tap Hold).
#undef AUTO_SHIFT_TIMEOUT
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define RETRO_SHIFT 1000

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat
/* #define QUICK_TAP_TERM 0 */

// ################### //
// #   KEY OVERRIDE  # //
// ################### //

const key_override_t comm_key_override = ko_make_basic(MOD_MASK_SHIFT, MY_COMM, MY_QUES); // , or ?
const key_override_t dot_key_override = ko_make_basic(MOD_MASK_SHIFT, MY_DOT, MY_SCLN); // . or ;
const key_override_t slash_key_override = ko_make_basic(MOD_MASK_SHIFT, MY_SLSH, MY_COLN); // / or :
/* const key_override_t dirty_next_ws = ko_make_basic(MOD_MASK_ALT, MY_I, MY_O); */
/* const key_override_t dirty_kill_window = ko_make_basic(MOD_MASK_ALT, MY_X, LALT(KC_F4)); */

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
  &comm_key_override,
  &dot_key_override,
  &slash_key_override,
};

// ############### //
// #   MOD TAP   # //
// ############### //

// Left-hand home row mods
#define GUI_A LGUI_T(MY_A)
#define ALT_R LALT_T(MY_R)
#define CTL_S LCTL_T(MY_S)
#define SHT_T LSFT_T(MY_T)

// Right-hand home row mods
#define SFT_N RSFT_T(MY_N)
#define CTL_E RCTL_T(MY_E)
#define ALT_I LALT_T(MY_I)
#define GUI_O RGUI_T(MY_O)

// Left-hand colemak home row mods
#define GUI_W LGUI_T(MY_W)
#define ALT_W LALT_T(MY_W)
/* #define ALT_ LALT_T(MY_) */
#define SFT_C LSFT_T(MY_C)
#define CTL_D LCTL_T(MY_D)
#define SFT_V LSFT_T(MY_V)

// Right-hand colemak home row mods
#define CTL_K RCTL_T(MY_K)
#define SFT_K RSFT_T(MY_K)
#define CTL_H RCTL_T(MY_H)
#define SFT_H RSFT_T(MY_H)
/* #define ALT_ RALT_T(MY_) */
#define GUI_Y RGUI_T(MY_Y)
#define ALT_Y LALT_T(MY_Y)

// ################# //
// #   TAP DANCE   # //
// ################# //

enum {
  TD_X,
};

tap_dance_action_t tap_dance_actions[] = {
  // Tap once for X, twice for ALT-X
  [TD_X] = ACTION_TAP_DANCE_DOUBLE(KC_X, LALT(KC_X)),
};
