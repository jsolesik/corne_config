#pragma once

#define JSO_LAYER_BINDINGS_BASE \
&kp TAB &kp Q &kp W &kp F &kp P &kp B &kp J &kp L &kp U &kp Y &kp SEMI &kp LEFT_BRACKET \
&kp BSPC HRL(LGUI, A) HRL(LALT, R) HRL(LCTRL, S) HRL(LSHFT, T)  &kp G &kp M HRR(RSHFT, N) HRR(RCTRL, E) HRR(RALT, I) HRR(RGUI, O) &kp RIGHT_BRACKET \
&kp PIPE &kp Z &kp X &kp C &kp D &kp V &kp K &kp H &kp COMMA &kp DOT &kp SLASH &kp BACKSLASH \
B_LT(L_MEDIA, ESC) B_LT(L_NAV, SPACE) B_LT(L_MOUSE, TAB) B_LT(L_SYM, ENTER) B_LT(L_NUM, BSPC) B_LT(L_FUNC, DEL)

#define JSO_LAYER_BINDINGS_ALTER \
&kp TAB    &kp Q        &kp W        &kp E         &kp R         &kp T        &kp Y    &kp U         &kp I         &kp O        &kp P           &kp BSPC \
&kp LCTRL  HRL(LGUI, A)  HRL(LALT, S)  HRL(LCTRL, D)  HRL(LSHFT, F)  &kp G    &kp H    HRR(RSHFT, J)  HRR(RCTRL, K)  HRR(RALT, L)  HRR(RGUI, SEMI)  &kp SQT \
&kp LSHFT  &kp Z        &kp X        &kp C         &kp V         &kp B        &kp N    &kp M         &kp COMMA     &kp DOT      &kp FSLH        &kp ESC \
&kp LGUI      &mo L_LOWER   &kp SPACE    &kp RET  &mo L_RAISE   &kp RALT

#define JSO_LAYER_BINDINGS_EXTRA \
&kp TAB   &kp Y        &kp C        &kp L          &kp M          &kp K            &kp Z          &kp F         &kp U         &kp COMMA    &kp SQT      &kp MINUS \
&kp BSPC  HRL(LGUI, I)  HRL(LALT, S)  HRL(LCTRL, R)  HRL(LSHFT, T)  &kp G          &kp P          HRR(RSHFT, N)  HRR(RCTRL, E)  HRR(RALT, A)  HRR(RGUI, O)  &kp SEMI \
&kp PIPE  &kp Q        &kp V        &kp W          &kp D          &kp J            &kp B          &kp H         &kp SLASH     &kp DOT      &kp X        &kp RET \
B_LT(L_MEDIA, ESC) B_LT(L_NAV, SPACE) B_LT(L_MOUSE, TAB) B_LT(L_SYM, ENTER) B_LT(L_NUM, BSPC) B_LT(L_FUNC, DEL)

//sds
#define JSO_LAYER_BINDINGS_OPT \
&kp TAB   &kp Y        &kp O        &kp U          &kp K          &kp X            &kp G          &kp W         &kp D         &kp L        &kp COMMA    &kp BSPC \
&kp BSPC  HRL(LGUI, I)  HRL(LALT, A)  HRL(LCTRL, E)   HRL(LSHFT, N)   &kp F        &kp B          HRR(RSHFT, S)  HRR(RCTRL, T)  HRR(RALT, R)  HRR(RGUI, C)  &kp SEMI \
&kp PIPE  &kp SLASH    &kp Z        &kp H          &kp SQT        &kp Q            &kp V          &kp P         &kp M         &kp J        &kp DOT      &kp ESC \
B_LT(L_MEDIA, ESC)  B_LT(L_NAV, SPACE)  B_LT(L_MOUSE, TAB)        B_LT(L_SYM, ENTER)  B_LT(L_NUM, BSPC)   B_LT(L_FUNC, DEL)

#define JSO_LAYER_BINDINGS_NUM \
&none  &kp LBKT &kp N7 &kp N8 &kp N9 &kp RBKT &none B_TO(BASE) B_TO(ALTER) B_TO(EXTRA) B_TO(OPT) &none \
&none  &kp SEMI &kp N4 &kp N5 &kp N6 &kp EQUAL &none &kp RSHFT &kp RCTRL &kp RALT &kp RGUI &none \
&none  &kp GRAVE &kp N1 &kp N2 &kp N3 &kp BLSH &none B_TO(NUM) B_TO(NAV) &none &none &none \
&kp DOT  &kp N0 &kp MINUS &none &none &none 

#define JSO_LAYER_BINDINGS_SYM \
&none  &kp LBRC   &kp AMPERSAND  &kp ASTERISK          &kp LEFT_PARENTHESIS   &kp RBRC          &none  B_TO(BASE)    B_TO(ALTER)   B_TO(EXTRA)  B_TO(OPT)      &none \
&none  &kp COLON  &kp DOLLAR     &kp PERCENT           &kp CARET              &kp PLUS          &none  &kp RSHFT  &kp RCTRL  &kp RALT  &kp RGUI    &none \
&none  &kp TILDE  &kp EXCL       &kp AT                &kp HASH               &kp PIPE          &none  B_TO(SYM)     B_TO(MOUSE)   &none   &none  &none \
&kp LEFT_PARENTHESIS  &kp RIGHT_PARENTHESIS  &kp UNDERSCORE    &none  &none      &none

#define JSO_LAYER_BINDINGS_FUNC \
&kp K_SCREENSAVER  &kp F12  &kp F7  &kp F8  &kp F9   &kp PRINTSCREEN    &none  B_TO(BASE)    B_TO(ALTER)   B_TO(EXTRA)  B_TO(OPT)       &none \
&win_screenshot    &kp F11  &kp F4  &kp F5  &kp F6   &kp SCROLLLOCK     &none  &kp RSHFT  &kp RCTRL  &kp RALT  &kp RGUI     &none \
&CtrlAltDel        &kp F10  &kp F1  &kp F2  &kp F3   &kp PAUSE_BREAK    &none  B_TO(FUNC)    B_TO(MEDIA)   &none   &none  &none \
&kp K_APP  &kp SPACE  &kp TAB       &none  &none      &none

#define JSO_LAYER_BINDINGS_NAV \
&none     B_TO(OPT)        B_TO(EXTRA)  B_TO(ALTER)   B_TO(BASE)    &none       &kp K_REDO    &kp K_PASTE     &kp K_COPY      &kp K_CUT     &kp K_UNDO       &none \
&none     &kp LGUI      &kp LALT  &kp LCTRL  &kp LSHFT  &none       &kp CAPSLOCK  &kp LEFT_ARROW  &kp DOWN_ARROW  &kp UP_ARROW  &kp RIGHT_ARROW  &none \
&none     &none    &none     B_TO(NUM)     B_TO(NAV)     &none       &kp INS       &kp HOME        &kp PG_DN       &kp PG_UP     &kp END          &none \
&none      &none      &none       &kp RET       &kp BSPC        &kp DEL

#define JSO_LAYER_BINDINGS_MOUSE \
&none     B_TO(OPT)        B_TO(EXTRA)  B_TO(ALTER)   B_TO(BASE)    &none       &kp K_REDO  &kp K_PASTE     &kp K_COPY      &kp K_CUT     &kp K_UNDO       &none \
&none     &kp LGUI      &kp LALT  &kp LCTRL  &kp LSHFT  &none       &none       &mmv MOVE_LEFT  &mmv MOVE_DOWN  &mmv MOVE_UP  &mmv MOVE_RIGHT  &none \
&none     &none  &none     B_TO(SYM)     B_TO(MOUSE)   &none       &none       &msc SCRL_LEFT  &msc SCRL_DOWN  &msc SCRL_UP  &msc SCRL_RIGHT  &none \
&none      &none      &none       &mkp M2     &mkp M1         &mkp M3
                                  
#define JSO_LAYER_BINDINGS_MEDIA \
&none     B_TO(OPT)        B_TO(EXTRA)  B_TO(ALTER)   B_TO(BASE)    &none       &none              &none             &kp C_BRI_DN  &kp C_BRI_UP  &none         &none \
&none     &kp LGUI      &kp LALT  &kp LCTRL  &kp LSHFT  &none       &ext_power EP_TOG  &kp C_PREV        &kp C_VOL_DN  &kp C_VOL_UP  &kp C_NEXT    &none \
&none     &none  &none     B_TO(FUN)     B_TO(MEDIA)   &none       &out OUT_TOG       &bt BT_SEL 0      &bt BT_SEL 1  &bt BT_SEL 2  &bt BT_SEL 3  &bt BT_CLR \
&none      &none      &none       &kp C_STOP         &kp C_PLAY_PAUSE  &kp C_MUTE

#define JSO_LAYER_BINDINGS_LOWER \
&kp ESC    &none                 &kp N7  &kp N8    &kp N9     &kp PAGE_UP           &kp LG(LS(J))      &kp LC(LS(TAB))  &kp LC(TAB)   &none         B_TO(BASE)                 &kp DELETE \
&kp LCTRL  &none                 &kp N4  &kp N5    &kp N6     &kp PAGE_DOWN         &kp LEFT           &kp DOWN         &kp UP        &kp RIGHT     &none                 &kp RET \
&kp LSHFT  &kp LC(LS(LA(LGUI)))  &kp N1  &kp N2    &kp N3     &kp N0                &kp C_VOL_DN       &kp C_VOL_UP     &kp C_BRI_DN  &kp C_BRI_UP  &kp LC(LS(LA(LGUI)))  &kp LG(LSHFT) \
&kp LGUI  &trans L_ALTER  &kp SPACE        &kp LG(LA(SPACE))  &trans        &kp RALT

#define JSO_LAYER_BINDINGS_RAISE \
&kp GRAVE  &kp EXCL              &kp AT          &kp POUND             &kp DOLLAR        &kp PERCENT        &kp CARET          &kp AMPS           &kp STAR               &kp PLUS         &kp EQUAL             &kp MINUS \
&kp LCTRL  &none                 &kp LEFT_BRACE  &kp LEFT_PARENTHESIS  &kp LEFT_BRACKET  &kp SQT            &kp DOUBLE_QUOTES  &kp RIGHT_BRACKET  &kp RIGHT_PARENTHESIS  &kp RIGHT_BRACE  &kp BACKSLASH         &kp RET \
&kp LSHFT  &kp LC(LS(LA(LGUI)))  &none           &none                 &none             &none              &kp UNDER          &none              &none                  &none            &kp LC(LS(LA(LGUI)))  &kp RSHFT \
&kp LGUI              &trans         &kp LC(SPACE)      &kp SPACE          &trans          &kp RALT

#define JSO_LAYER_BINDINGS_ADJUST \
&kp LC(LA(F2))  &none                 &kp F7  &kp F8    &kp F9     &kp F12    &kp C_PP        &kp C_PREV      &kp C_NEXT    &none            &none                 &kp PRINTSCREEN \
&none           &none                 &kp F4  &kp F5    &kp F6     &kp F11    &msc SCRL_LEFT  &msc SCRL_DOWN  &msc SCRL_UP  &msc SCRL_RIGHT  &kp RC(RALT)          &kp RCTRL \
&none           &kp LC(LS(LA(LGUI)))  &kp F1  &kp F2    &kp F3     &kp F10    &kp C_RW        &kp C_FF        &none         &none            &kp LC(LS(LA(LGUI)))  &kp RC(RSHFT) \
&kp LGUI  &trans  &none      &none           &trans       &kp RALT