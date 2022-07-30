/*
 * Buzzer.c
 *
 *  Author: Kirellos Emad Samir
 */ 
#include "Buzzer.h"

void Buzzer_Init(void)
{
	DIO_SetPin_Direction(DIO_PORTA,DIO_PIN3,DIO_PIN_OUTPUT);
}
void Buzzer_ON(void)
{
	DIO_SetPin_Value(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
}
void Buzzer_OFF(void)
{
	DIO_SetPin_Value(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
}
void Buzzer_TGL(void)
{
	DIO_SetPin_Value(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
}