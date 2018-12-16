#include QMK_KEYBOARD_H

// readability
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/* Dvorak
	 * ,-----------------------------------------------------------------------------------.
	 * | Tab  |   "  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Bksp |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | Esc  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |Enter |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Ctrl | Alt  | GUI  |Brite |Lower |    Space    |Raise | Left | Down |  Up  |Right |
	 * `-----------------------------------------------------------------------------------'
	 */
	[0] = LAYOUT_planck_mit(
		KC_TAB,   KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC,
		KC_LCTL,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT,
		KC_LSFT,  KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_LSFT,
		KC_ESC,   KC_LGUI, KC_CAPS, KC_LALT, MO(1),   KC_SPC,  MO(2),   KC_RALT, _______, KC_Z,    KC_RSFT 
	),

/* Layer 1
	 * ,-----------------------------------------------------------------------------------.
	 * |   `  |      |      |      |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Reset|      |      |      |      |      |      |      |      |      |      |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[1] = LAYOUT_planck_mit(
	
	KC_0,     KC_1,    KC_2,    KC_3,    KC_4,    KC_GRV,  KC_DLR,  KC_5,    KC_6,   KC_7,    KC_8,    KC_9,    
	KC_COLON, KC_MINS, KC_LBRC, KC_RBRC, KC_BSLS, _______, _______, KC_BSLS, KC_EQL, KC_UNDS, KC_MINS, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	RESET,   _______, _______, _______, _______, _______, _______, KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT
		),

	/* LAYER 2 (R_ INDICATES RGB CONTROLS)
	 * ,-----------------------------------------------------------------------------------.
	 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      |   -  |R_MODE|R_HUE+|R_HUE-|      |      |   -  |   =  |   [  |   -  |  \   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |BL_TOG|BL_STEP|     |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[2] = LAYOUT_planck_mit(

	KC_0,     KC_1,    KC_2,    KC_3,    KC_4,    KC_GRV,  KC_DLR,  KC_5,    KC_6,   KC_7,    KC_8,    KC_9,    
	KC_COLON, KC_MINS, RGB_MOD, RGB_HUI, KC_SLASH, _______, _______,  KC_SLASH,  _______,  _______,  KC_MINS,  _______,  
	KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
	KC_MY_COMPUTER, KC_WWW_HOME, KC_WWW_SEARCH, KC_WWW_FORWARD, _______,     _______,      _______, _______, KC_LEFT, KC_DOWN, KC_RGHT

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
