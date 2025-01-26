#include QMK_KEYBOARD_H

// independant RGB
/* #define SPLIT_LAYER_STATE_ENABLE */

// onboard led (needs RGBLIGHT_ENABLE rules and config.h settings)
#ifdef RGBLIGHT_ENABLE

void keyboard_post_init_user(void) {
  // Initialize RGB to static black
  rgblight_enable_noeeprom();
  rgblight_sethsv_noeeprom(HSV_BLACK);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}

void housekeeping_task_user(void) {
  rgblight_setrgb_at(255, 0, 255, 0);
  rgblight_setrgb_at(0, 255, 255, 1);
  /* sethsv(127, 0, 10, (LED_TYPE *)&led[1]); */
}

#endif

// turn off power led
void keyboard_pre_init_user(void) {
  // Set our LED pin as output
  setPinOutput(24);
  // Turn the LED off
  // (Due to technical reasons, high is off and low is on)
  writePinHigh(24);
}
