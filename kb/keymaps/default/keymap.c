/* #include "kb.h" */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


  	[0] = LAYOUT(KC_A, KC_B, KC_C, TO(1)),
    
  	[1] = LAYOUT(RGB_TOG, RGB_MOD, RGB_RMOD, TO(2)),

	[2] = LAYOUT(KC_LSFT, RGB_VAI, RGB_HUI, TO(3)),

	[3] = LAYOUT(QK_BOOT, QK_RBT, QK_RBT, TO(0))

};

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_ln_P(PSTR("DEFAULT"), false);
            oled_write_ln_P(PSTR(""), false);
            oled_write_ln_P(PSTR("- A"), false);
            oled_write_ln_P(PSTR("- B"), false);
            oled_write_ln_P(PSTR("- C"), false);
            break;
        case 1:
            oled_write_ln_P(PSTR("RGB1"), false);
            oled_write_ln_P(PSTR(""), false);
            oled_write_ln_P(PSTR("- TOGGLE"), false);
            oled_write_ln_P(PSTR("- FORWARD"), false);
            oled_write_ln_P(PSTR("- BACKWARD"), false);
            break;
        case 2:
            oled_write_ln_P(PSTR("RGB2"), false);
            oled_write_ln_P(PSTR(""), false);
            oled_write_ln_P(PSTR("- SHIFT"), false);
            oled_write_ln_P(PSTR("- BRIGHTNESS"), false);
            oled_write_ln_P(PSTR("- HUE"), false);
            break;
        case 3:
            oled_write_ln_P(PSTR("QMK"), false);
            oled_write_ln_P(PSTR(""), false);
            oled_write_ln_P(PSTR("- BOOT"), false);
            oled_write_ln_P(PSTR("- REBOOT"), false);
            oled_write_ln_P(PSTR("- REBOOT"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

/*    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
*/
    return false;
}
#endif

/*const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}

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
*/