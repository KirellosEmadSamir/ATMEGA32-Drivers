/*
 * Hbridge.c
 *  Author: Kirellos Emad Samir
 */ 

#include "Hbridge.h"

Motor_A_Init(void)
{
	
	
	DIO_SetPin_Direction(DIO_PORTD,DIO_PIN4,DIO_PIN_OUTPUT);

	DIO_SetPin_Direction(DIO_PORTC,DIO_PIN3,DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTC,DIO_PIN4,DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTC,DIO_PIN5,DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTC,DIO_PIN6,DIO_PIN_OUTPUT);
	
}
Motor_A_Enable(void)
{
	DIO_SetPin_Value(DIO_PORTD,DIO_PIN4,DIO_PIN_HIGH);
	
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN3,DIO_PIN_HIGH);
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN4,DIO_PIN_LOW);
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN5,DIO_PIN_HIGH);
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN6,DIO_PIN_LOW);
	
	
}
/*
MotorB_Init()
{
	
}
MotorB_Enable()
{
	

*/