#pragma once

#define HRL(MOD, TAP) &b_hr_left MOD TAP
#define HRR(MOD, TAP) &b_hr_right MOD TAP

#define B_MT(MOD, TAP) &b_mt MOD TAP
#define B_LT(LAYER, TAP) &b_lt L_##LAYER TAP

#define MT_SLASH &slash_lt
#define MT_DOT &dot_gt
#define MT_COLON &colon_qmark
#define MT_COMMA &comma_semi

#define B_LG &kp LGUI
#define B_LA &kp LALT
#define B_LC &kp LCTRL
#define B_LS &kp LSHFT
#define B_RS &kp RSHFT
#define B_RC &kp RCTRL
#define B_RA &kp RALT
#define B_RG &kp RGUI

#define MO_TOG(layer) &b_mo_tog L_##layer L_##layer   // Macro to apply momentary-layer-on-hold/toggle-layer-on-tap to a specific layer
#define AS(keycode) &b_as LS(keycode) keycode
