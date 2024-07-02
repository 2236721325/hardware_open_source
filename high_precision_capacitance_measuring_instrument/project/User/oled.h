#ifndef __OLED_H__
#define __OLED_H__

#include "stm32f1xx_hal.h"
//ʹ��Ӳ��I2C1 
///


///

void WriteCmd(void);
void OLED_WR_CMD(uint8_t cmd);
void OLED_WR_DATA(uint8_t data);
void OLED_Init(void);
void OLED_Clear(void);
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Set_Pos(uint8_t x, uint8_t y);
void OLED_On(void);
void OLED_ShowNum(uint8_t x,uint8_t y,unsigned int num,uint8_t len,uint8_t size2);
void OLED_ShowChar(uint8_t x,uint8_t y,uint8_t chr,uint8_t Char_Size);
void OLED_ShowString(uint8_t x,uint8_t y,uint8_t *chr,uint8_t Char_Size);
void OLED_ShowString_Len(uint8_t x,uint8_t y,uint8_t *chr,uint8_t Char_Size,uint8_t len);

void OLED_ShowCHinese(uint8_t x,uint8_t y,uint8_t no);


#endif
