#pragma once

#if !defined (JSO_LAYER_LIST)

#define JSO_LAYER_LIST \
JSO_X(BASE,   Colemak-DM) \
JSO_X(ALTER, Qwerty) \
JSO_X(EXTRA,  MTGAP) \
JSO_X(NUM,    Num) \
JSO_X(SYM,    "Sym") \
JSO_X(FUNC,   "Func") \
JSO_X(MOUSE,  "Mouse") \
JSO_X(MEDIA,  "Media") \
JSO_X(LOWER,  "Lower") \
JSO_X(RAISE,  "Raise") \
JSO_X(ADJUST, "Adjust")

#define L_BASE    0
#define L_QWERTY  1
#define L_EXTRA   2
#define L_NUM     3
#define L_SYM     4
#define L_FUNC    5
#define L_NAV     6
#define L_MOUSE   7
#define L_MEDIA   8
#define L_LOWER   9
#define L_RAISE   10
#define L_ADJUST  11

#endif