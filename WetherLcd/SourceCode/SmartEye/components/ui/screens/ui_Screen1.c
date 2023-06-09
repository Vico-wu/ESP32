// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: WhetherLCD

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Screen1, &ui_img_bg3_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LCY = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LCY, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LCY, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LCY, -52);
    lv_obj_set_y(ui_LCY, -98);
    lv_obj_set_align(ui_LCY, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LCY, "年");
    lv_obj_set_style_text_color(ui_LCY, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LCY, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LCY, &ui_font_Jianti32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableWhether = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableWhether, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableWhether, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableWhether, 11);
    lv_obj_set_y(ui_LableWhether, 188);
    lv_label_set_text(ui_LableWhether, "晴");
    lv_obj_set_style_text_color(ui_LableWhether, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableWhether, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableWhether, &ui_font_Jianti32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImgWhether = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_ImgWhether, &ui_img_710175435);
    lv_obj_set_width(ui_ImgWhether, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ImgWhether, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ImgWhether, -64);
    lv_obj_set_y(ui_ImgWhether, 23);
    lv_obj_set_align(ui_ImgWhether, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImgWhether, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImgWhether, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_ImgWhether, 200);

    ui_LCW = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LCW, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LCW, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LCW, 36);
    lv_obj_set_y(ui_LCW, 5);
    lv_obj_set_align(ui_LCW, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LCW, "星期");
    lv_obj_set_style_text_color(ui_LCW, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LCW, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LCW, &ui_font_Jianti32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableHour = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableHour, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableHour, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableHour, -78);
    lv_obj_set_y(ui_LableHour, -46);
    lv_obj_set_align(ui_LableHour, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableHour, "88");
    lv_obj_set_style_text_color(ui_LableHour, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableHour, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableHour, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableChineseMonth = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableChineseMonth, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableChineseMonth, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableChineseMonth, 71);
    lv_obj_set_y(ui_LableChineseMonth, 34);
    lv_obj_set_align(ui_LableChineseMonth, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableChineseMonth, "润五月");
    lv_obj_add_flag(ui_LableChineseMonth, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_style_text_color(ui_LableChineseMonth, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableChineseMonth, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableChineseMonth, &ui_font_Jianti24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableChineseDay = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableChineseDay, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableChineseDay, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableChineseDay, 67);
    lv_obj_set_y(ui_LableChineseDay, 59);
    lv_obj_set_align(ui_LableChineseDay, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableChineseDay, "三十一");
    lv_obj_add_flag(ui_LableChineseDay, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_style_text_color(ui_LableChineseDay, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableChineseDay, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableChineseDay, &ui_font_Jianti24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LCDate = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LCDate, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LCDate, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LCDate, 11);
    lv_obj_set_y(ui_LCDate, 45);
    lv_obj_set_align(ui_LCDate, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LCDate, "农\n历");
    lv_obj_add_flag(ui_LCDate, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_style_text_color(ui_LCDate, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LCDate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LCDate, &ui_font_Jianti24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableWeek = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableWeek, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableWeek, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableWeek, 88);
    lv_obj_set_y(ui_LableWeek, 5);
    lv_obj_set_align(ui_LableWeek, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableWeek, "六");
    lv_obj_set_style_text_color(ui_LableWeek, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableWeek, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableWeek, &ui_font_Jianti32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LCM = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LCM, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LCM, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LCM, 25);
    lv_obj_set_y(ui_LCM, -99);
    lv_obj_set_align(ui_LCM, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LCM, "月");
    lv_obj_set_style_text_color(ui_LCM, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LCM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LCM, &ui_font_Jianti32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LCD = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LCD, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LCD, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LCD, 101);
    lv_obj_set_y(ui_LCD, -99);
    lv_obj_set_align(ui_LCD, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LCD, "日");
    lv_obj_set_style_text_color(ui_LCD, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LCD, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LCD, &ui_font_Jianti32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableTimeYear = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableTimeYear, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableTimeYear, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableTimeYear, -91);
    lv_obj_set_y(ui_LableTimeYear, -98);
    lv_obj_set_align(ui_LableTimeYear, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableTimeYear, "88");
    lv_obj_set_style_text_color(ui_LableTimeYear, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableTimeYear, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableTimeYear, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableTimeMonth = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableTimeMonth, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableTimeMonth, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableTimeMonth, -13);
    lv_obj_set_y(ui_LableTimeMonth, -100);
    lv_obj_set_align(ui_LableTimeMonth, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableTimeMonth, "88");
    lv_obj_set_style_text_color(ui_LableTimeMonth, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableTimeMonth, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableTimeMonth, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableTimeDate = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableTimeDate, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableTimeDate, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableTimeDate, 62);
    lv_obj_set_y(ui_LableTimeDate, -98);
    lv_obj_set_align(ui_LableTimeDate, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableTimeDate, "88");
    lv_obj_set_style_text_color(ui_LableTimeDate, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableTimeDate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableTimeDate, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableMin = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableMin, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableMin, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableMin, -3);
    lv_obj_set_y(ui_LableMin, -46);
    lv_obj_set_align(ui_LableMin, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableMin, "88");
    lv_obj_set_style_text_color(ui_LableMin, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableMin, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableMin, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableSec = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableSec, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableSec, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableSec, 73);
    lv_obj_set_y(ui_LableSec, -46);
    lv_obj_set_align(ui_LableSec, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableSec, "88");
    lv_obj_set_style_text_color(ui_LableSec, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableSec, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableSec, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LCT = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LCT, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LCT, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LCT, -40);
    lv_obj_set_y(ui_LCT, -49);
    lv_obj_set_align(ui_LCT, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LCT, ":");
    lv_obj_set_style_text_color(ui_LCT, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LCT, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LCT, &ui_font_Jianti48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LCT1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LCT1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LCT1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LCT1, 35);
    lv_obj_set_y(ui_LCT1, -50);
    lv_obj_set_align(ui_LCT1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LCT1, ":");
    lv_obj_set_style_text_color(ui_LCT1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LCT1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LCT1, &ui_font_Jianti48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableTempHi = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableTempHi, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableTempHi, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableTempHi, 71);
    lv_obj_set_y(ui_LableTempHi, 48);
    lv_obj_set_align(ui_LableTempHi, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableTempHi, "32");
    lv_obj_set_style_text_color(ui_LableTempHi, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableTempHi, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableTempHi, &ui_font_Jianti24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableTempLo = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableTempLo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableTempLo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableTempLo, 21);
    lv_obj_set_y(ui_LableTempLo, 48);
    lv_obj_set_align(ui_LableTempLo, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableTempLo, "32");
    lv_obj_set_style_text_color(ui_LableTempLo, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableTempLo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableTempLo, &ui_font_Jianti24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableDASH = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableDASH, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableDASH, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableDASH, 46);
    lv_obj_set_y(ui_LableDASH, 49);
    lv_obj_set_align(ui_LableDASH, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableDASH, "-");
    lv_obj_set_style_text_color(ui_LableDASH, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableDASH, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableDASH, &ui_font_Jianti24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableUNIT = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LableUNIT, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableUNIT, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableUNIT, 100);
    lv_obj_set_y(ui_LableUNIT, 48);
    lv_obj_set_align(ui_LableUNIT, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableUNIT, "℃");
    lv_obj_set_style_text_color(ui_LableUNIT, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableUNIT, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableUNIT, &ui_font_Jianti24, LV_PART_MAIN | LV_STATE_DEFAULT);

}
