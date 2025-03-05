/*
 * Building Library.c
 *
 *  Author: Kirellos Emad Samir
 */ 

#include <avr/io.h>
#include "LCD.h"
#include "Temp_Sensor.h"

int main(void)
{
    /* Replace with your application code */
	
	LCD_Init();
	Temp_Sensor_Init();
	Uint16t temp=0;
    while (1) 
    {
		
		LCD_Write_Command(0x80);
		LCD_Write_String("Temperature =");
		LCD_Write_Command(0xc0);
		
		temp=Temp_Sensor_Read();
		LCD_Write_Number(temp);
		_delay_ms(500);
		LCD_Clear();
    }
}

