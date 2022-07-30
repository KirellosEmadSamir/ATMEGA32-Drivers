/*
* LCD.c
*
*  Author: Kirellos Emad Samir
*/

#include "LCD.h"

void LCD_Init(void)
{
	#if LCD_Mode == 4
	DIO_SetPin_Direction(LCD_4BIT_CMD_PORT, LCD_RS, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_4BIT_CMD_PORT, LCD_RW, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_4BIT_CMD_PORT, LCD_EN, LCD_OUTPUT);
	
	DIO_SetPin_Direction(LCD_4BIT_DTA_PORT, LCD_DTA4, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_4BIT_DTA_PORT, LCD_DTA5, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_4BIT_DTA_PORT, LCD_DTA6, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_4BIT_DTA_PORT, LCD_DTA7, LCD_OUTPUT);
	_delay_ms(100);
	LCD_Write_Command(0x02);
	LCD_Write_Command(0x33);
	LCD_Write_Command(0x32);
	LCD_Write_Command(0x28);
	LCD_Write_Command(0x0C);
	LCD_Write_Command(0x01);
	LCD_Write_Command(0x06);
	
	#elif LCD_Mode == 8
	DIO_SetPin_Direction(LCD_8BIT_CMD_PORT, LCD_RS, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_8BIT_CMD_PORT, LCD_RW, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_8BIT_CMD_PORT, LCD_EN, LCD_OUTPUT);
	
	DIO_SetPin_Direction(LCD_8BIT_DTA_PORT, LCD_DTA0, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_8BIT_DTA_PORT, LCD_DTA1, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_8BIT_DTA_PORT, LCD_DTA2, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_8BIT_DTA_PORT, LCD_DTA3, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_8BIT_DTA_PORT, LCD_DTA4, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_8BIT_DTA_PORT, LCD_DTA5, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_8BIT_DTA_PORT, LCD_DTA6, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_8BIT_DTA_PORT, LCD_DTA7, LCD_OUTPUT);
	_delay_ms(100);
	#else
	#warning "Wrong Mode"
	#endif
}
void LCD_Write_Command(Uint8t command)
{
	/*Control of LCD*/
	/*RS is Logic low to write inside control register*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_RS, DIO_PIN_LOW);
	/*RW is logic low to write on LCD*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_RW, DIO_PIN_LOW);
	/*be sure that enable low before send command*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_EN, DIO_PIN_LOW);
	/*Write High Nipple of the command*/
	//PORTA = Get_HIGH_Nibble(command) | (PORTA & 0x0F);
	PORTA = (command & 0xF0) | (PORTA & 0x0F);
	/*Send High Pulse by using Enable*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_EN, DIO_PIN_HIGH);
	_delay_ms(1);/*Delay for only 1 millisecond*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_EN, DIO_PIN_LOW);
	
	/*Write Low Nipple of the command*/
	//PORTA = Get_LOW_Nibble(command) | (PORTA & 0x0F);
	PORTA = (command  << 4) | (PORTA & 0x0F);
	/*Send High Pulse by using Enable*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_EN, DIO_PIN_HIGH);
	_delay_ms(1);/*Delay for only 1 millisecond*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_EN, DIO_PIN_LOW);
	_delay_ms(5);
}
void LCD_Write_Data(Uint8t data)
{
	/*Control of LCD*/
	/*RS is Logic low to write inside control register*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_RS, DIO_PIN_HIGH);
	/*RW is logic low to write on LCD*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_RW, DIO_PIN_LOW);
	/*be sure that enable low before send command*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_EN, DIO_PIN_LOW);
	/*Write High Nipple of the command*/
	//PORTA = Get_HIGH_Nibble(data) | (PORTA & 0x0F);
	PORTA = (data & 0xF0) | (PORTA & 0x0F);
	/*Send High Pulse by using Enable*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_EN, DIO_PIN_HIGH);
	_delay_ms(1);/*Delay for only 1 millisecond*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_EN, DIO_PIN_LOW);
	
	/*Write Low Nipple of the command*/
	//PORTA = Get_LOW_Nibble(data) | (PORTA & 0x0F);
	PORTA = (data << 4) | (PORTA & 0x0F);
	//PORTA = (data & 0xF0) | (PORTA & 0x0F);
	/*Send High Pulse by using Enable*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_EN, DIO_PIN_HIGH);
	_delay_ms(1);/*Delay for only 1 millisecond*/
	DIO_SetPin_Value(LCD_4BIT_CMD_PORT, LCD_EN, DIO_PIN_LOW);
	_delay_ms(5);
}
void LCD_Clear(void)
{
	LCD_Write_Command(0x01);
}
void LCD_Write_String(Uint8t* str)/**/
{
	while(*str != '\0')
	{
		_delay_ms(1);
		LCD_Write_Data(*str);
		str++;
	}
}
void LCD_Write_Number(Uint32t number)/**/
{
	Uint8t num[10];
	//itoa(number,(char*)num,10);//Integer
	ltoa(number,(Uint8t*)num,10);//Number need to print, Empty character string to fill with numbers, enter base needed, Long
	LCD_Write_String(num);
}