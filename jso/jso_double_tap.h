#pragma once

//#define U_BOOT &b_soft_off
#define U_BOOT &b_bootloader

#define JSO_X(LAYER, NAME) \
  #define TO_##LAYER &b_to_L_##LAYER
JSO_LAYER_LIST
#undef JSO_X