#define BT QK_BOOT
#define __ _______ // shorter transparent keys
#define ____ _______ // same
#define XX XXXXXXX // non-keys
#define XXXX XXXXXXX // non-keys

// ##############
// #   AZERTY   #
// ##############

/* #ifdef TARGET_AZERTY */

/* ############# */
/* #   ALPHA   # */
/* ############# */

#define MY_Q KC_A
#define MY_W KC_Z
#define MY_A KC_Q
#define MY_M KC_SCLN
#define MY_Z KC_W

/* ########### */
/* #   NUM   # */
/* ########### */

#define MY_1 S(KC_1)
#define MY_2 S(KC_2)
#define MY_3 S(KC_3)
#define MY_4 S(KC_4)
#define MY_5 S(KC_5)
#define MY_6 S(KC_6)
#define MY_7 S(KC_7)
#define MY_8 S(KC_8)
#define MY_9 S(KC_9)
#define MY_0 S(KC_0)

/* ############### */
/* #   ACCENTS   # */
/* ############### */

#define MY_ç KC_9
#define MY_è KC_7
#define MY_é KC_2
#define MY_à KC_0
#define MY_ù KC_QUOT

/* ################### */
/* #   SPECIAL DUOS  # */
/* ################### */

#define MY_QUOT KC_4 // '
#define MY_CIRC KC_LBRC // ^
#define MY_DIAE S(FR_CIRC) // ¨

#define MY_COMM KC_M // ,
#define MY_QUES S(MY_COMM) // ?

#define MY_DOT S(MY_SCLN) // .
#define MY_SCLN KC_COMM // ;

#define MY_SLSH S(MY_COLN) // /
#define MY_COLN KC_DOT  // :

/* ############### */
/* #   SPECIAL   # */
/* ############### */

#define MY_AMPR KC_1 // &
#define MY_ASTR KC_NUHS // *
#define MY_AT ALGR(KC_0) // @
#define MY_BSLS ALGR(KC_8) /* \ */
#define MY_DLR KC_RBRC // $
#define MY_DQT KC_3 // "
#define MY_EQL KC_EQL // =
#define MY_EXLM KC_SLSH // !
#define MY_GRV ALGR(KC_7) // `
#define MY_GT S(KC_NUBS) // >
#define MY_HASH ALGR(KC_3) // #
#define MY_LBRC ALGR(KC_5) // [
#define MY_LCBR ALGR(KC_4) // {
#define MY_LPRN KC_5 // (
#define MY_LT KC_NUBS // <
#define MY_MINS KC_6 // -
#define MY_PERC S(KC_QUOT) // %
#define MY_PIPE ALGR(KC_6) // |
#define MY_PLUS S(KC_EQL) // +
#define MY_RBRC ALGR(KC_MINS) // ]
#define MY_RCBR ALGR(KC_EQL) // }
#define MY_RPRN KC_MINS // )
#define MY_TILD ALGR(KC_2) // ~

// dot

/* #else */

/* #endif */
