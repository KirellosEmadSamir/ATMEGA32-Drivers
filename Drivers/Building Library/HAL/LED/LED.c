/*
* LED.c
*
*  Author: Kirellos Emad Samir
*/

/*Source File for function implementations*/
#include "LED.h"

void LED0_Init(void)
{
	DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
}
void LED0_ON(void)
{
	DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
}
void LED0_OFF(void)
{
	DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
}
void LED0_TGL(void)
{
	DIO_TogglePin(DIO_PORTC, DIO_PIN2);
}