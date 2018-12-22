#include QMK_KEYBOARD_H

// readability
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_planck_mit(
		LALT_T(KC_TAB),   KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC,
		LCTL_T(KC_ESC),  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT,
		KC_LSPO,  KC_LGUI, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSPC,
		KC_ESC,   KC_LALT, KC_CAPS, MO(3), MO(1),   KC_SPC,  MO(2),   MO(4), _______, KC_Z,    KC_RSFT 
	),

	[1] = LAYOUT_planck_mit(
	
	KC_LGUI, KC_F1, KC_F2, KC_3, KC_F4, _______, _______, _______, _______, _______, _______, _______,
	KC_SCLN, KC_F5, KC_F6, KC_F7, KC_F8, _______, KC_BSLS, KC_SLASH, KC_EQL,  KC_MINS, KC_UNDS, _______,
	_______, KC_F9, KC_F10, KC_F11, KC_F12, _______, KC_QUES, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, _______,
	RESET,   _______, _______, KC_LALT, _______, _______, _______, KC_LALT, _______, _______, _______
	),

	[2] = LAYOUT_planck_mit(

	KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,    KC_9,      KC_0,    _______,
	KC_COLON, KC_CIRC, KC_DLR, KC_HASH, KC_ASTERISK, KC_PERCENT, KC_BSLS, KC_SLASH, KC_EQL, KC_MINS, KC_UNDS, _______,  
	_______, _______, _______, _______, _______, KC_AMPERSAND,   KC_QUES, KC_PIPE, KC_PLUS, _______, _______, _______,
	_______, _______, _______,  LALT(KC_TAB), _______,  _______, _______, KC_LALT, _______, _______, _______

	),

	[3] = LAYOUT_planck_mit (
	
	_______, _______, _______, _______, _______, _______, _______, KC_PGUP, KC_UP, KC_PGDOWN, _______, _______,
	_______, _______, _______, _______, _______, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, _______,
	_______, _______, _______, _______, _______, _______, KC_INSERT, KC_MENU, KC_DELETE, _______, _______, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
	),
	[4] = LAYOUT_planck_mit(
	
	_______, _______, KC_BTN1,    KC_MS_UP,   KC_BTN2, _______, _______, KC_BSLS, KC_EQL, KC_UNDS, KC_MINS, _______,
	_______, KC_MS_WH_UP, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_WH_DOWN, _______, KC_LBRC, KC_RBRC, _______, _______, _______,		   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
	)
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
