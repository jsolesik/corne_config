#pragma once

#include "jso_layer_list.h"

#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)
#define U_STRINGIFY(x) #x
#define U_MACRO(name,...) \
/ { \
  macros { \
    name: name { \
      compatible = "zmk,behavior-macro"; \
      #binding-cells = <0>; \
      __VA_ARGS__ \
    }; \
  }; \
};

#define U_NP &none // key is not present
#define U_NA &none // present but not available for use
#define U_NU &none // available but not used

#define U_TAPPING_TERM 200
#define JSO_CLIPBOARD_FUN

#include "jso_clipboard.h"
#include "jso_double_tap.h"
#include "jso_mousekeys.h"
#include "jso_behaviors.h"
