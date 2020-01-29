#include QMK_KEYBOARD_H

#define ______ KC_TRNS
#define XXXXXXX KC_NO
#define MOD_L 1
#define MOD_R 2
#define AMOD_L 3 //mod key where alt should be
#define AMOD_R 4 
enum { 
	CT_CLN = 0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_planck_mit(
			LALT_T(KC_TAB),  KC_QUOT, KC_COMM, KC_DOT,  KC_P,  KC_Y,   KC_F,  KC_G,  KC_C,   KC_R,    KC_L,   KC_BSPC,
			LCTL_T(KC_ESC),  KC_A,    KC_O,    KC_E,    KC_U,  KC_I,   KC_D,  KC_H,  KC_T,   KC_N,    KC_S,   KC_ENT,
			LSFT_T(KC_MINS), KC_LGUI, KC_Q,    KC_J,    KC_K,  KC_X,   KC_B,  KC_M,  KC_W,   KC_V,    KC_Z,   RSFT_T(KC_UNDS),
			KC_SCLN, KC_MENU,KC_LALT, MO(3),   MO(1),   KC_SPC, MO(2), MO(4), KC_RALT, KC_END, KC_LGUI
			),

	/************************************ MOD LEFT *******************************************************/
	[1] = LAYOUT_planck_mit(
			KC_LGUI, KC_F1,  KC_F2,  KC_F3,  KC_F4,  ______, KC_AMPR,  KC_HASH,  KC_PERC,  ______, KC_UNDS,  ______,
			______,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  ______, KC_PIPE,  KC_MINS,  KC_PLUS,  KC_EQL, KC_SLSH,  ______,
			______,  KC_F9,  KC_F10, KC_F11, KC_F12, ______, KC_QUES,  KC_ASTR,  KC_CIRC,  KC_DLR, KC_BSLS,  ______,
			RESET,   ______, ______, ______, ______, ______, ______,  ______,  ______,  ______, ______
			),

	/************************************ MOD RIGHT *******************************************************/
	[2] = LAYOUT_planck_mit(
			KC_GRV,  KC_1,       KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,     KC_9,     KC_0,    ______,
			KC_COLN,  KC_LBRC, KC_RBRC,  KC_LPRN, KC_RPRN, ______, ______, ______, ______,  ______,  ______, ______,
			KC_SCLN, ______,    ______, ______, ______, ______, ______, ______, ______, ______, ______,  ______,
			______, ______, ______,  ______, ______,  ______, ______, ______, ______, ______, ______
			),

	/************************************ ALT MOD LEFT **************************************************/
	[3] = LAYOUT_planck_mit (
			______, ______,  ______,  ______, ______, ______, ______,  KC_PGUP, KC_UP,   KC_PGDN, ______, KC_DEL,
			______, KC_MYCM, KC_MAIL, ______, ______, ______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, ______,
			______, ______,  ______,  ______, ______, ______, KC_FIND, KC_APP,  KC_BRK,  KC_INS,  ______, ______,
			______, ______,  ______,  ______, ______, ______, ______,  ______,  ______,  ______,  ______
			),

	/************************************ ALT MOD RIGHT **************************************************/
	[4] = LAYOUT_planck_mit(
			______, ______, KC_BTN1, KC_MS_U, KC_BTN2, ______, ______, KC_PGUP, KC_UP,   KC_PGDN, ______, KC_DEL,
			______, KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  ______,
			______, KC_WSCH, KC_WFAV, KC_WBAK, KC_WFWD, KC_WSTP, KC_FIND, KC_APP,  KC_BRK,  KC_INS,  ______, ______,
			______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______
			)
};
