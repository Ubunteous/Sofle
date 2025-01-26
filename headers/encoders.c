#include QMK_KEYBOARD_H

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    /* switch (biton32(layer_state)) { */
    /* case ! _MIDI: */
    if (clockwise) {
      /* tap_code(KC_VOLU); */
      tap_code(KC_PGUP);
    } else {
      /* tap_code(KC_VOLD); */
      tap_code(KC_PGDN);
    }
    /* break; */
    /* default: */
    /*   // midi 3 = undefined. use with midi learn */
    /*   if (clockwise) { */
    /*     encoder_val <= 127 - midiKnobStep ? (encoder_val += midiKnobStep) : (encoder_val = 127); */
    /*     midi_send_cc(&midi_device, 0, 3, encoder_val); */
    /*   } else { */
    /*     encoder_val >= midiKnobStep ? (encoder_val -= midiKnobStep) : (encoder_val = 0); */
    /*     midi_send_cc(&midi_device, 0, 3, encoder_val); */
    /*   } */
    /* } */
  }
 
  else if (index == 1) {
    /* switch (biton32(layer_state)) { */
    /* case ! _MIDI: */
    if (clockwise) {
      tap_code(KC_BRIU);
    } else {
      tap_code(KC_BRID);
    }
    /* break; */
    /* default: */
    /* // midi 1 = modwheel */
    /* if (clockwise) { */
    /* 	encoder_val <= 127 - midiKnobStep ? (encoder_val += midiKnobStep) : (encoder_val = 127); */
    /* 	midi_send_cc(&midi_device, 0, 1, encoder_val); */
    /* } else { */
    /* 	encoder_val >= midiKnobStep ? (encoder_val -= midiKnobStep) : (encoder_val = 0); */
    /* 	midi_send_cc(&midi_device, 0, 1, encoder_val); */
    /* } */
    /* } */
  }
  return true;
}
  
#endif
