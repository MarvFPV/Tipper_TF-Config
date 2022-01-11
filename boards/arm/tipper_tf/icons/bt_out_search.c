#include "lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_BT_OUT_SEARCH
#define LV_ATTRIBUTE_IMG_BT_OUT_SEARCH
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BT_OUT_SEARCH uint8_t bt_out_search_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x07, 0x00, 0x00, 0x70, 0x00, 
  0x0e, 0x00, 0x00, 0x38, 0x00, 
  0x1c, 0x00, 0x00, 0x1c, 0x00, 
  0x38, 0x00, 0x00, 0x0e, 0x00, 
  0x70, 0x00, 0x00, 0x07, 0x00, 
  0xe0, 0x00, 0x00, 0x03, 0x80, 
  0xc0, 0x00, 0x00, 0x01, 0x80, 
  0x9c, 0x00, 0x00, 0x00, 0x80, 
  0x3e, 0x00, 0x00, 0x00, 0x00, 
  0x7f, 0x00, 0x00, 0x00, 0x00, 
  0x7f, 0x80, 0x00, 0x00, 0x00, 
  0x7f, 0xc0, 0x00, 0x00, 0x00, 
  0xff, 0xe0, 0x00, 0x00, 0x00, 
  0xff, 0xf0, 0x00, 0x00, 0x00, 
  0xff, 0xf8, 0x00, 0x00, 0x00, 
  0xff, 0xfc, 0x00, 0x00, 0x00, 
  0xff, 0xfe, 0x00, 0x00, 0x00, 
  0xff, 0xfc, 0x00, 0x00, 0x00, 
  0xff, 0xf8, 0x80, 0x00, 0x00, 
  0xff, 0xf1, 0xc0, 0x00, 0x00, 
  0xff, 0xe3, 0xe0, 0x00, 0x00, 
  0x7f, 0xc7, 0xf0, 0x00, 0x00, 
  0x7f, 0x8f, 0xf8, 0x00, 0x00, 
  0x7f, 0x1f, 0xfc, 0x00, 0x00, 
  0x3e, 0x3f, 0xfe, 0x00, 0x00, 
  0x9c, 0x7f, 0xff, 0x00, 0x80, 
  0xc8, 0xff, 0xff, 0x81, 0x80, 
  0xe1, 0xff, 0xff, 0xc3, 0x80, 
  0x71, 0xff, 0xff, 0xc7, 0x00, 
  0x39, 0xff, 0xff, 0xce, 0x00, 
  0x1c, 0xff, 0xff, 0x9c, 0x00, 
  0x0e, 0x7f, 0xff, 0x38, 0x00, 
  0x07, 0x0f, 0xf8, 0x70, 0x00, 
};

const lv_img_dsc_t bt_out_search = {
  .header.always_zero = 0,
  .header.w = 33,
  .header.h = 33,
  .data_size = 174,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = bt_out_search_map,
};
