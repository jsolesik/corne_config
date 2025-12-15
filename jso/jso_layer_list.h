#pragma once

#if !defined (JSO_LAYER_LIST)

#define JSO_LAYER_LIST \
JSO_X(BASE,      COLEMAK) \
JSO_X(ALTER,     QWERTY) \
JSO_X(EXTRA,     IRST) \
JSO_X(OPT,       OCTA8) \
JSO_X(NUM,       NUMERIC) \
JSO_X(SYM,       SYMBOLS) \
JSO_X(FUNC,      FUNCTIONS) \
JSO_X(NAV,       NAVIGATION) \
JSO_X(MOUSE,     MOUSE) \
JSO_X(MEDIA,     MEDIA) \
JSO_X(LOWER,     LOWER) \
JSO_X(RAISE,     RAISE) \
JSO_X(ADJUST,    ADJUST) \

#define L_BASE      0
#define L_ALTER     1   
#define L_EXTRA     2   
#define L_OPT       3     
#define L_NUM       4     
#define L_SYM       5     
#define L_FUNC      6    
#define L_NAV       7     
#define L_MOUSE     8   
#define L_MEDIA     9   
#define L_LOWER     10   
#define L_RAISE     11   
#define L_ADJUST    12  

#endif