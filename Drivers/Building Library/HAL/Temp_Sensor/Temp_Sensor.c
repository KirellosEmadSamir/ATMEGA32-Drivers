/*
 * Temp_Sensor.c
 *
 * Created: 12/04/2022 02:15:56 م
 *  Author: Kirellos Emad Samir
 */ 
#include "Temp_Sensor.h"

void Temp_Sensor_Init(void)
{
	ADC_Init();
}

Uint16t Temp_Sensor_Read(void)
{
	Uint16t adc_reading=ADC_Read();
	Uint16t temp=((Uint32t)adc_reading*500)/1023;
	
	return temp;
}