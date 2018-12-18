#include QMK_KEYBOARD_H

// readability
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_planck_mit(
		KC_TAB,   KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC,
		KC_LCTL,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT,
		KC_LSPO,  KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSPC,
		KC_ESC,   KC_LGUI, KC_CAPS, KC_LALT, MO(1),   KC_SPC,  MO(2),   KC_RALT, _______, KC_Z,    KC_RSFT 
	),

	[1] = LAYOUT_planck_mit(
	
	KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_GRV,  KC_DLR,   KC_6,    KC_7,   KC_8,    KC_9,    KC_0,
	_______, KC_MINS, KC_LBRC, KC_RBRC, KC_BSLS, _______, _______, KC_BSLS, KC_EQL, KC_UNDS, KC_MINS, _______,
	_______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______,				
	RESET,   _______, _______, _______, _______, _______, KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT, _______
	),

	[2] = LAYOUT_planck_mit(

	KC_0,     KC_1,    KC_2,    KC_3,    KC_4,    KC_GRV,  KC_DLR,  KC_5,    KC_6,   KC_7,    KC_8,    KC_9,    
	_______, KC_BTN1,	KC_MS_UP, 	KC_BTN2,     	KC_COLON, _______, _______,  KC_SLASH,  _______,  _______,  KC_MINS,  _______,  
	KC_MS_WH_UP, KC_MS_LEFT,	KC_MS_DOWN, 	KC_MS_RIGHT, 	KC_MS_WH_DOWN, _______, _______, _______, _______, _______, _______, _______,
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
