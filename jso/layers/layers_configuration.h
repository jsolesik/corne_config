#pragma once


#define JSO_LAYER_BINDINGS_BASE     JSO_LAYER_BINDINGS_COLEMAK
#define JSO_LAYER_BINDINGS_ALTER    JSO_LAYER_BINDINGS_QWERTY
#define JSO_LAYER_BINDINGS_EXTRA    JSO_LAYER_BINDINGS_ISRT
#define JSO_LAYER_BINDINGS_OPT      JSO_LAYER_BINDINGS_OCTA8

// COLEMAK-DM
// -----------------------------------------------------------------------------------------
// |  TAB |  Q  |  W  |  F  |  P  |  B  |         |  J  |  L   |  U  |  Y  |  ;  |  [  |
// | BKSP |  A  |  R  |  S  |  T  |  G  |         |  K  |  N   |  E  |  I  |  O  |  '  |
// |   |  |  Z  |  X  |  C  |  D  |  V  |         |  M  |  H   |  ,  |  .  |  /  |  \  |
//                    | ESC | SPC | TAB |         | ENT | BSPC | DEL |
#define JSO_LAYER_BINDINGS_COLEMAK \
&kp TAB    &kp Q             &kp W              &kp F             &kp P               &kp B         &kp J    &kp L             &kp U              &kp Y              AS(SEMI)          &b_as RBKT LBKT \
&kp BSPC   HRL(LGUI, A)      HRL(LALT, R)       HRL(LCTRL, S)     HRL(LSHFT, T)       &kp G         &kp M    HRR(RSHFT, N)     HRR(RCTRL, E)      HRR(RALT, I)       HRR(RGUI, O)      AS(SQT) \
AS(BSLH)   &kp Z             &kp X              &kp C             &kp D               &kp V         &kp K    &kp H             AS(COMMA)          AS(DOT)            AS(FSLH)          AS(BSLH) \
                                                B_LT(MEDIA, ESC)  B_LT(NAV, SPACE) B_LT(MOUSE, TAB)    B_LT(SYM, ENTER) B_LT(NUM, BSPC)  B_LT(FUNC, DEL)


// QWERTY
// -----------------------------------------------------------------------------------------
// |  TAB |  Q  |  W  |  E  |  R  |  T  |        |  Y  |  U   |  I  |  O  |  P  | BKSP |
// | CTRL |  A  |  S  |  D  |  F  |  G  |        |  H  |  J   |  K  |  L  |  ;  |  '   |
// | SHFT |  Z  |  X  |  C  |  V  |  B  |        |  N  |  M   |  ,  |  .  |  /  | ESC  |
//                    | GUI | LWR | SPC |        | ENT | RSE  | ALT |
#define JSO_LAYER_BINDINGS_QWERTY \
&kp TAB    &kp Q        &kp W        &kp E         &kp R         &kp T        &kp Y    &kp U         &kp I         &kp O        &kp P           &kp BSPC \
B_LC  HRL(LGUI, A)  HRL(LALT, S)  HRL(LCTRL, D)  HRL(LSHFT, F)  &kp G    &kp H    HRR(RSHFT, J)  HRR(RCTRL, K)  HRR(RALT, L)  HRR(RGUI, SEMI)  AS(SQT) \
B_LS  &kp Z        &kp X        &kp C         &kp V         &kp B        &kp N    &kp M         AS(COMMA)     AS(DOT)      AS(FSLH)        &kp ESC \
B_LG  MO_TOG(LOWER)   &kp SPACE    &kp RET  MO_TOG(RAISE)   B_RA

// ISRT
// -----------------------------------------------------------------------------------------
// |  TAB |  Y  |  C  |  L  |  M  |  K  |         |  Z  |  F   |  U  |  ,  |  '  |  -   |
// | BKSP |  I  |  S  |  R  |  T  |  G  |         |  P  |  N   |  E  |  A  |  O  |  ;   |
// |   |  |  Q  |  V  |  W  |  D  |  J  |         |  B  |  H   |  /  |  .  |  X  | ENT  |
//                    | ESC | SPC | TAB |         | ENT | BSPC | DEL |
#define JSO_LAYER_BINDINGS_ISRT \
&kp TAB   &kp Y        &kp C        &kp L          &kp M          &kp K            &kp Z          &kp F         &kp U         AS(COMMA)    AS(SQT)      AS(MINUS) \
&kp BSPC  HRL(LGUI, I)  HRL(LALT, S)  HRL(LCTRL, R)  HRL(LSHFT, T)  &kp G          &kp P          HRR(RSHFT, N)  HRR(RCTRL, E)  HRR(RALT, A)  HRR(RGUI, O)  AS(SEMI) \
AS(BSLH)  &kp Q        &kp V        &kp W          &kp D          &kp J            &kp B          &kp H         AS(SLASH)    AS(DOT)      &kp X        &kp RET \
B_LT(MEDIA, ESC) B_LT(NAV, SPACE) B_LT(MOUSE, TAB) B_LT(SYM, ENTER) B_LT(NUM, BSPC) B_LT(FUNC, DEL)

// OCTA8
// -----------------------------------------------------------------------------------------
// |  TAB |  Y  |  O  |  U  |  K  |  X  |         |  G  |  W   |  D  |  L  |  ,  | BSPC |
// | BKSP |  I  |  A  |  E  |  N  |  F  |         |  B  |  S   |  T  |  R  |  C  |  ;   |
// |   |  |  /  |  Z  |  H  |  '  |  Q  |         |  V  |  P   |  M  |  J  |  .  | ESC  |
//                    | ESC | SPC | TAB |         | ENT | BSPC | DEL |
#define JSO_LAYER_BINDINGS_OCTA8 \
&kp TAB   &kp Y        &kp O        &kp U          &kp K          &kp X            &kp G          &kp W         &kp D         &kp L        AS(COMMA)    &kp BSPC \
&kp BSPC  HRL(LGUI, I)  HRL(LALT, A)  HRL(LCTRL, E)   HRL(LSHFT, N)   &kp F        &kp B          HRR(RSHFT, S)  HRR(RCTRL, T)  HRR(RALT, R)  HRR(RGUI, C)  AS(SEMI) \
AS(BSLH)  AS(FSLH)    &kp Z        &kp H          AS(SQT)        &kp Q            &kp V          &kp P         &kp M         &kp J        AS(DOT)      &kp ESC \
B_LT(MEDIA, ESC)  B_LT(NAV, SPACE)  B_LT(MOUSE, TAB)        B_LT(SYM, ENTER)  B_LT(NUM, BSPC)   B_LT(FUNC, DEL)

// NUMERIC
// -----------------------------------------------------------------------------------------
// |      |  [  |  6  |  7  |  9  |  ]  |           |     |     |     |     |     |      |
// |      |  ;  |  4  |  5  |  6  |  =  |           |     | SFT | CTR | ALT | GUI |      |
// |      |  `  |  1  |  2  |  3  |  \  |           |     |     |     |     |     |      |
//                    |  .  |  0  |  -  |           |     |     |     |
#define JSO_LAYER_BINDINGS_NUM \
U_NU  &kp LBKT &kp N7 &kp N8 &kp N9 &kp RBKT U_NU B_B_TO(BASE) B_B_TO(ALTER) B_B_TO(EXTRA) B_B_TO(OPT) U_NU \
U_NU  &kp SEMI &kp N4 &kp N5 &kp N6 &kp EQUAL U_NU B_RS B_RC B_RA B_RG U_NU \
U_NU  &kp GRAVE &kp N1 &kp N2 &kp N3 &kp BSLH U_NU B_B_TO(NUM) B_B_TO(NAV) U_NU U_NU U_NU \
&kp DOT  &kp N0 &kp MINUS U_NU U_NU U_NU 

// SYMBOLS
// -----------------------------------------------------------------------------------------
// |      |  {  |  &  |  *  |  (  |  }  |           |     |     |     |     |     |      |
// |      |  :  |  $  |  %  |  ^  |  +  |           |     | SFT | CTR | ALT | GUI |      |
// |      |  ~  |  !  |  @  |  #  |  |  |           |     |     |     |     |     |      |
//                    |  (  |  )  |  _  |           |     |     |     |
#define JSO_LAYER_BINDINGS_SYM \
U_NU  &kp LBRC   &kp AMPERSAND  &kp ASTERISK          &kp LEFT_PARENTHESIS   &kp RBRC          U_NU  B_B_TO(BASE)    B_B_TO(ALTER)   B_B_TO(EXTRA)  B_B_TO(OPT)      U_NU \
U_NU  &kp COLON  &kp DOLLAR     &kp PERCENT           &kp CARET              &kp PLUS          U_NU  B_RS  B_RC  B_RA  B_RG    U_NU \
U_NU  &kp TILDE  &kp EXCL       &kp AT                &kp HASH               &kp PIPE          U_NU  B_B_TO(SYM)     B_B_TO(MOUSE)   U_NU   U_NU  U_NU \
&kp LEFT_PARENTHESIS  &kp RIGHT_PARENTHESIS  &kp UNDERSCORE    U_NU  U_NU      U_NU

// FUNCTIONS
// -----------------------------------------------------------------------------------------
// |      | F12 | F7 | F8 | F9 |  PRSC |           |     |     |     |     |     |      |
// |      | F11 | F4 | F5 | F6 |  SCLK |           |     | SFT | CTR | ALT | GUI |      |
// |      | F10 | F1 | F2 | F3 |  PBRK |           |     |     |     |     |     |      |
//                   | APP | SPC | TAB |           |     |     |     |
#define JSO_LAYER_BINDINGS_FUNC \
&kp K_SCREENSAVER  &kp F12  &kp F7  &kp F8  &kp F9   &kp PRINTSCREEN    U_NU  B_B_TO(BASE)    B_B_TO(ALTER)   B_B_TO(EXTRA)  B_B_TO(OPT)       U_NU \
&win_screenshot    &kp F11  &kp F4  &kp F5  &kp F6   &kp SCROLLLOCK     U_NU  B_RS  B_RC  B_RA  B_RG     U_NU \
&CtrlAltDel        &kp F10  &kp F1  &kp F2  &kp F3   &kp PAUSE_BREAK    U_NU  B_B_TO(FUNC)    B_B_TO(MEDIA)   U_NU   U_NU  U_NU \
&kp K_APP  &kp SPACE  &kp TAB       U_NU  U_NU      U_NU

// NAVIGATION
// -----------------------------------------------------------------------------------------
// |      |     |     |     |     |     |           | REDO | PASTE | COPY | CUT | UNDO  |    |
// |      | GUI | ALT | CTR | SFT |     |           | CAPS | LEFT  | DOWN | UP  | RIGHT |    |
// |      |     |     |     |     |     |           | INS  | HOME  | PGDN | PGUP| END   |    |
//                    |     |     |     |           | RET  | BSPC | DEL  |
#define JSO_LAYER_BINDINGS_NAV \
U_NU     B_B_TO(OPT)        B_B_TO(EXTRA)  B_B_TO(ALTER)   B_B_TO(BASE)    U_NU       U_RDO  U_PST     U_CPY      U_CUT     U_UND       U_NU \
U_NU     B_LG      B_LA  B_LC  B_LS  U_NU       &kp CAPSLOCK  &kp LEFT_ARROW  &kp DOWN_ARROW  &kp UP_ARROW  &kp RIGHT_ARROW  U_NU \
U_NU     U_NU    U_NU     B_B_TO(NUM)     B_B_TO(NAV)     U_NU       &kp INS       &kp HOME        &kp PG_DN       &kp PG_UP     &kp END          U_NU \
U_NU      U_NU      U_NU       &kp RET       &kp BSPC        &kp DEL

// MOUSE
// -----------------------------------------------------------------------------------------
// |      |     |     |     |     |     |           | REDO | PASTE | COPY  | CUT   | UNDO |    |
// |      | GUI | ALT | CTR | SFT |     |           |      | M L   | M DN  | M UP  | M R  |    |
// |      |     |     |     |     |     |           |      | SCR L | SCR D | SCR U | END  |    |
//                    |     |     |     |           | RET  | BSPC  | DEL  |
#define JSO_LAYER_BINDINGS_MOUSE \
U_NU B_B_TO(OPT) B_B_TO(EXTRA) B_B_TO(ALTER) B_B_TO(BASE)   U_NU       U_RDO  U_PST     U_CPY      U_CUT     U_UND       U_NU \
U_NU B_LG    B_LA      B_LC     B_LS      U_NU       U_NU       U_MS_L  U_MS_D  U_MS_U  U_MS_R  U_NU \
U_NU U_NU       U_NU         B_B_TO(SYM)   B_B_TO(MOUSE)  U_NU       U_NU       U_WH_L  U_WH_D  U_WH_U  U_WH_R  U_NU \
U_NU U_NU       U_NU         U_BTN2        U_BTN1         U_BTN3
            
// MEDIA
// -----------------------------------------------------------------------------------------
// |      |     |     |     |     |     |           |     |      | B_DN | B_UP |      |        |
// |      | GUI | ALT | CTR | SFT |     |           | EP  | PREV | V_DN | V_UP | NEXT |        |
// |      |     |     |     |     |     |           | OUT | BT_0 | BT_1 | BT_2 | BT_3 | BT_CLR |
//                    |     |     |     |           | STOP | PPLAY | MUTE |
#define JSO_LAYER_BINDINGS_MEDIA \
U_NU     B_B_TO(OPT)        B_B_TO(EXTRA)  B_B_TO(ALTER)   B_B_TO(BASE)    U_NU       U_NU              U_NU             &kp C_BRI_DN  &kp C_BRI_UP  U_NU         U_NU \
U_NU     B_LG      B_LA  B_LC  B_LS  U_NU       &ext_power EP_TOG  &kp C_PREV        &kp C_VOL_DN  &kp C_VOL_UP  &kp C_NEXT    U_NU \
U_NU     U_NU  U_NU     B_B_TO(FUNC)     B_B_TO(MEDIA)   U_NU       &out OUT_TOG       &bt BT_SEL 0      &bt BT_SEL 1  &bt BT_SEL 2  &bt BT_SEL 3  &bt BT_CLR \
U_NU      U_NU      U_NU       &kp C_STOP         &kp C_PLAY_PAUSE  &kp C_MUTE

// LOWER
// -----------------------------------------------------------------------------------------
// | ESC  |     |  6  |  7  |  9  | PGUP |           |     |     |     |     |     |      |
// | CTRL |     |  4  |  5  |  6  | PGDN |           |     | SFT | CTR | ALT | GUI |      |
// | SHFT |     |  1  |  2  |  3  |  0   |           |     |     |     |     |     |      |
//                    | GUI |     | SPC  |           |     |     |     |
#define JSO_LAYER_BINDINGS_LOWER \
&kp ESC U_NU                 &kp N7  &kp N8    &kp N9     &kp PAGE_UP           U_NU            B_B_TO(BASE)    &kp UP        U_NU          U_NU         &kp DELETE \
B_LC    U_NU                 &kp N4  &kp N5    &kp N6     &kp PAGE_DOWN         U_NU            &kp LEFT      &kp DOWN      &kp RIGHT     U_NU         &kp RET \
B_LS    &kp LC(LS(LA(LGUI))) &kp N1  &kp N2    &kp N3     &kp N0                &kp C_VOL_DN    &kp C_VOL_UP  &kp C_BRI_DN  &kp C_BRI_UP  &kp LC(LS(LA(LGUI)))  &kp LG(LSHFT) \
B_LG    U_TR  &kp SPACE      &kp LG(LA(SPACE))  U_TR        B_RA

// RAISE
// -----------------------------------------------------------------------------------------
// |      |  [  |  6  |  7  |  9  |  ]  |           |     |     |     |     |     |      |
// |      |  ;  |  4  |  5  |  6  |  =  |           |     | SFT | CTR | ALT | GUI |      |
// |      |  `  |  1  |  2  |  3  |  \  |           |     |     |     |     |     |      |
//                    |  .  |  0  |  -  |           |     |     |     |
#define JSO_LAYER_BINDINGS_RAISE \
&kp GRAVE  &kp EXCL              &kp AT          &kp POUND             &kp DOLLAR        &kp PERCENT        &kp CARET          &kp AMPS           &kp STAR               &kp PLUS         &kp EQUAL             &kp MINUS \
B_LC  U_NU                 &kp LEFT_BRACE  &kp LEFT_PARENTHESIS  &kp LEFT_BRACKET  &kp SQT            &kp DOUBLE_QUOTES  &kp RIGHT_BRACKET  &kp RIGHT_PARENTHESIS  &kp RIGHT_BRACE  &kp BACKSLASH         &kp RET \
B_LS  &kp LC(LS(LA(LGUI)))  U_NU           U_NU                 U_NU             U_NU              &kp UNDER          U_NU              U_NU                  U_NU            &kp LC(LS(LA(LGUI)))  B_RS \
B_LG              U_TR         &kp LC(SPACE)      &kp SPACE          U_TR          B_RA

// ADJUST
// -----------------------------------------------------------------------------------------
// |      | F12 | F7 | F8 | F9 |  PRSC |           |     |     |     |     |     |      |
// |      | F11 | F4 | F5 | F6 |  SCLK |           |     | SFT | CTR | ALT | GUI |      |
// |      | F10 | F1 | F2 | F3 |  PBRK |           |     |     |     |     |     |      |
//                   | APP | SPC | TAB |           |     |     |     |
#define JSO_LAYER_BINDINGS_ADJUST \
&kp LC(LA(F2))  U_NU                 &kp F7  &kp F8    &kp F9     &kp F12    &kp C_PP        &kp C_PREV      &kp C_NEXT    U_NU            U_NU                 &kp PRINTSCREEN \
U_NU           U_NU                 &kp F4  &kp F5    &kp F6     &kp F11    &msc SCRL_LEFT  &msc SCRL_DOWN  &msc SCRL_UP  &msc SCRL_RIGHT  &kp RC(RALT)          B_RC \
U_NU           &kp LC(LS(LA(LGUI)))  &kp F1  &kp F2    &kp F3     &kp F10    &kp C_RW        &kp C_FF        U_NU         U_NU            &kp LC(LS(LA(LGUI)))  &kp RC(RSHFT) \
B_LG  U_TR  U_NU      U_NU           U_TR       B_RA

// MTGAP
// -----------------------------------------------------------------------------------------
// |  TAB |  Y  |  P  |  O  |  U  |  J  |         |  K  |  D   |  L  |  C  |  W  | BKSP |
// | BSPC |  I  |  N  |  E  |  A  |  ,  |         |  M  |  H   |  T  |  S  |  R  |      |
// |  |   |  Q  |  Z  |  /  |  .  |  :  |         |  B  |  F   |  G  |  V  |  X  | ESC  |
//                    | ESC | SPC | TAB |         | ENT | BSPC | DEL |
#define JSO_LAYER_BINDINGS_MTGAP \
&kp TAB   &kp Y        &kp P        &kp O          &kp U          &kp J            &kp K  &kp D         &kp L         &kp C        &kp W        &kp BSPC \
&kp BSPC  HRL(LGUI, I)  HRL(LALT, N)  HRL(LCTRL, E)   HRL(LSHFT, A)   &kp COMMA     &kp M  HRR(RSHFT, H)  HRR(RCTRL, T)  HRR(RALT, S)  HRR(RGUI, R)  AS(SQT) \
AS(BSLH)  &kp Q        &kp Z        AS(FSLH)       AS(DOT)        AS(SEMI)          &kp B  &kp F         &kp G         &kp V        &kp X        &kp ESC \
B_LT(MEDIA, ESC)  B_LT(NAV, SPACE)  B_LT(MOUSE, TAB)    B_LT(SYM, ENTER)  B_LT(NUM, BSPC)   B_LT(FUNC, DEL)

// ENTIUM
// -----------------------------------------------------------------------------------------
// |  TAB |  Q  |  Y  |  O  |  U  |  =  |         |  X  |  L   |  D  |  W  |  Z  | BSPC |
// |   B  |  C  |  I  |  A  |  E  |  -  |         |  K  |  H   |  T  |  N  |  S  |  F   |
// |      |  '  |  ,  |  .  |  ;  |  /  |         |  J  |  M   |  G  |  P  |  V  | RET  |
//                    | ESC | SPC | TAB |         | ENT |  R | DEL |
#define JSO_LAYER_BINDINGS_ENTIUM \
&kp TAB   &kp Q         &kp Y         &kp O           &kp U           AS(EQUAL)        &kp X    &kp L          &kp D          &kp W         &kp Z         &kp BSPC \
&kp B     HRL(LGUI, C)  HRL(LALT, I)  HRL(LCTRL, A)   HRL(LSHFT, E)   AS(MINUS)        &kp K    HRR(RSHFT, H)  HRR(RCTRL, T)  HRR(RALT, N)  HRR(RGUI, S)  &kp F \
AS(BSLH)  AS(SQT)       AS(COMMA)     AS(DOT)         AS(SEMI)        &kp SLASH        &kp J    &kp M          &kp G          &kp P         &kp V         &kp RET \
                        B_LT(MEDIA, ESC)  B_LT(NAV, SPACE)  B_LT(MOUSE, TAB)        B_LT(SYM, ENTER)  B_LT(NUM, R)   B_LT(FUNC, DEL)

// NUMERIC ALTERNATIVE - need to fix
// -----------------------------------------------------------------------------------------
// |     |     |     |     |     |     |       |  [  |  6  |  7  |  9  |  ]  |     
// |     | GUI | ALT | CTL | SFT |     |       |  ;  |  4  |  5  |  6  |  =  |     
// |     |     |     |     |     |     |       |  `  |  1  |  2  |  3  |  \  |     
#define JSO_LAYER_BINDINGS_NUM_ALT \
U_NU  B_TO(OPT)    B_TO(EXTRA)  B_TO(ALTER)   B_TO(BASE)    U_NU     &kp LBKT   &kp N7  &kp N8   &kp N9  &kp RBKT   U_NU \
U_NU  &kp LGUI  &kp LALT  &kp LCTRL  &kp LSHFT  U_NU     &kp SEMI   &kp N4  &kp N5   &kp N6  &kp EQUAL  U_NU \
U_NU  U_NU   U_NU     U_NU U_NU U_NU     &kp GRAVE  &kp N1  &kp N2   &kp N3  &kp BLSH   U_NU \
                           U_NU      U_NU      U_NU         &kp MINUS  &kp N0  &kp DOT  

// SYMBOLS ALTERNATIVE - need to fix                        
// -----------------------------------------------------------------------------------------
// |     |     |     |     |     |     |         |  {  |  &  |  *  |  (  |  }  |     |
// |     | GUI | ALT | CTL | SFT |     |         |  :  |  $  |  %  |  ^  |  +  |     |
// |     |     |     |     |     |     |         |  ~  |  !  |  @  |  #  |  |  |     |
//                   |     |     |     |         |  _  |  (  |  )  |  
#define JSO_LAYER_BINDINGS_SYM_ALT \
U_NU  B_TO(OPT)    B_TO(EXTRA)   B_TO(ALTER)      B_TO(BASE)     U_NU             &kp LBRC       &kp AMPERSAND  &kp ASTERISK  &kp LEFT_PARENTHESIS  &kp RBRC    U_NU \
U_NU  &kp LGUI  &kp LALT   &kp LCTRL     &kp LSHFT   U_NU             &kp COLON      &kp DOLLAR     &kp PERCENT   &kp CARET             &kp PLUS    U_NU \
U_NU  U_NU    U_NU      U_NU  U_NU  U_NU             &kp TILDE      &kp EXCL       &kp AT        &kp HASH              &kp PIPE    U_NU \
                            U_NU         U_NU       U_NU             &kp UNDERSCORE &kp LEFT_PARENTHESIS  &kp RIGHT_PARENTHESIS

// FUNCTIONS ALTERNATIVE - need to fix
// -----------------------------------------------------------------------------------------
// |     |     |     |     |     |     |         | PRSC | F7 | F8 | F9  | F12 |    | 
// |     | GUI | ALT | CTL | SFT |     |         | SCLK | F4 | F5 | F6  | F11 |    | 
// |     |     |     |     |     |     |         | PBRK | F1 | F2 | F3  | F10 |    | 
//                   |     |     |     |         |  TAB | SPC | APP |     
#define JSO_LAYER_BINDINGS_FUNC_ALT \
U_NU       B_TO(OPT)    B_TO(EXTRA)  B_TO(ALTER)      B_TO(BASE)      U_NU       &kp PRINTSCREEN  &kp F7  &kp F8  &kp F9  &kp F12  &kp K_SCREENSAVER \
U_NU       &kp LGUI  &kp LALT  &kp LCTRL     &kp LSHFT    U_NU       &kp SCROLLLOCK   &kp F4  &kp F5  &kp F6  &kp F11  &win_screenshot \
U_NU       U_NU   U_NU     U_NU  U_NU  U_NU       &kp PAUSE_BREAK  &kp F1  &kp F2  &kp F3  &kp F10  &CtrlAltDel \
                                U_NU         U_NU        U_NU       &kp TAB  &kp SPACE  &kp K_APP

// NAVIGATION ALTERNATIVE - nedd to fix
// -----------------------------------------------------------------------------------------
// |      |     |     |     |     |     |           |     |      | B_DN | B_UP |      |        |
// |      | GUI | ALT | CTR | SFT |     |           | EP  | PREV | V_DN | V_UP | NEXT |        |
// |      |     |     |     |     |     |           | OUT | BT_0 | BT_1 | BT_2 | BT_3 | BT_CLR |
//                    |     |     |     |           | STOP | PPLAY | MUTE |
#define JSO_LAYER_BINDINGS_NAV_ALT \
U_NU     B_TO(OPT)        B_TO(EXTRA)  B_TO(ALTER)   B_TO(BASE)    U_NU       &kp K_REDO    &kp K_PASTE     &kp K_COPY      &kp K_CUT     &kp K_UNDO       U_NU \
U_NU     &kp LGUI      &kp LALT  &kp LCTRL  &kp LSHFT  U_NU       &kp CAPSLOCK  &kp LEFT_ARROW  &kp DOWN_ARROW  &kp UP_ARROW  &kp RIGHT_ARROW  U_NU \
U_NU     U_NU    U_NU     U_NU     U_NU     U_NU       &kp INS       &kp HOME        &kp PG_DN       &kp PG_UP     &kp END          U_NU \
                                  U_NU      U_NU      U_NU       &kp RET       &kp BSPC        &kp DEL

/*
COLEMAK-DH:
---------------------------
 1 2 3 4 5  6 7 8 9 0    [ 
 q w f p b  j l u y ;    ] 
 a r s t g  m n e i o    \ 
 z x c d v  k h , . /      
---------------------------

QWERTY:
1 2 3 4 5  6 7 8 9 0 - =
Q W E R T  Y U I O P [ ] \
A S D F G  H J K L ; '
Z X C V B  N M , . /

MTGAP:
 Y  P  O  U  J   K  D  L  C  W
 I  N  E  A  ;   M  H  T  S  R
 Q  Z  <  >  ?   B  F  G  V  X

 y  p  o  u  j   k  d  l  c  w
 i  n  e  a  ,   m  h  t  s  r
 q  z  /  .  :   b  f  g  v  x

ISRT:
TAB   Y C L M K		Z F U , ' -
BSPC  I S R T G		P N E A O ;
|     Q V W D J		B H / . X ENT
   SFT MOD   BSPC SPACE

OCTA8:
y o u k x  	g w d l ,
i a e n f  	b s t r c ;
/ z h ' q  	v p m j .

ENTIUMv12:
  q y o u = 	x l d w z
b c i a e - 	k h t n s f
  ' , . ; / 	j m g p v
				r
*/