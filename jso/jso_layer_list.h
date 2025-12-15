#pragma once

#if !defined (JSO_LAYER_LIST)

#define JSO_LAYER_LIST \
JSO_X(BASE,      COLEMAK) \
JSO_X(ALTER,     QWERTY) \
JSO_X(EXTRA,     MTGAP) \
JSO_X(OPT,       OCTA8) 
/*\
JSO_X(NUM,       NUMERIC) \
JSO_X(NUM_ALT,   NUMERIC_ALT) \
JSO_X(SYM,       SYMBOLS) \
JSO_X(SYM_ALT,   SYMBOLS_ALT) \
JSO_X(FUNC,      FUNCTIONS) \
JSO_X(FUNC_ALT,  FUNCTIONS_ALT) \
JSO_X(NAV,       NAVIGATION) \
JSO_X(NAV_ALT,   NAVIGATION) \
JSO_X(MOUSE,     MOUSE) \
JSO_X(MOUSE_ALT, MOUSE_ALT) \
JSO_X(MEDIA,     MEDIA) \
JSO_X(MEDIA_ALT, MEDIA_ALT) \
JSO_X(LOWER,     LOWER) \
JSO_X(RAISE,     RAISE) \
JSO_X(ADJUST,    ADJUST) 
*/

#define L_BASE      0
#define L_ALTER     1   
#define L_EXTRA     2   
#define L_OPT       3     
#define L_NUM       4     
#define L_NUM_ALT   5 
#define L_SYM       6     
#define L_SYM_ALT   7 
#define L_FUNC      8    
#define L_FUNC_ALT  9
#define L_NAV       10     
#define L_NAV_ALT   11 
#define L_MOUSE     12   
#define L_MOUSE_ALT 13
#define L_MEDIA     14   
#define L_MEDIA_ALT 15
#define L_LOWER     16   
#define L_RAISE     17   
#define L_ADJUST    18  

#endif