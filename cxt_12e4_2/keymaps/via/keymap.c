#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │Tab│ Q │ W │ E │ R │ T │
     * ├───┼───┼───┼───┼───┼───┤
     * │Bsp│ A │ S │ D │ F │ G │
     * ├───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │
     * ├───┼───┼───┼───┼───┼───┤
     * │Ctl│App│GUI│Alt│Spc│Spc│
     * └───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x6(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_LCTL, KC_MENU, KC_LGUI, KC_LALT, KC_SPC,  KC_SPC
    ),
    [1] = LAYOUT_ortho_4x6(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [2] = LAYOUT_ortho_4x6(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [3] = LAYOUT_ortho_4x6(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { 
        if (clockwise) {
            tap_code(dynamic_keymap_get_keycode(biton32(layer_state),0,2));
        } else {
            tap_code(dynamic_keymap_get_keycode(biton32(layer_state),0,1));
        }
    } else if (index == 1) { 
        if (clockwise) {
            tap_code(dynamic_keymap_get_keycode(biton32(layer_state),1,2));
        } else {
            tap_code(dynamic_keymap_get_keycode(biton32(layer_state),1,1));
        }
    } else if (index == 2) { 
        if (clockwise) {
            tap_code(dynamic_keymap_get_keycode(biton32(layer_state),2,2));
        } else {
            tap_code(dynamic_keymap_get_keycode(biton32(layer_state),2,1));
        }
    } else if (index == 3) { 
        if (clockwise) {
            tap_code(dynamic_keymap_get_keycode(biton32(layer_state),3,2));
        } else {
            tap_code(dynamic_keymap_get_keycode(biton32(layer_state),3,1));
        }
    }
    return false;
}
