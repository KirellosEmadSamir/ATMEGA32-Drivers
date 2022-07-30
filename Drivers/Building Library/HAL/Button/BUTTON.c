/*
* BUTTON.c
*
 *  Author: Kirellos Emad Samir
*/

#include "BUTTON.h"

void BTN0_Init(void)
{
	/*Define Direction as input*/
	DIO_SetPin_Direction(DIO_PORTB, DIO_PIN0, DIO_PIN_INPUT);
}
Uint8t BTN0_Read(void)
{
	Uint8t BTNX  ;
	Uint8t value ;
	DIO_ReadPin_Value(DIO_PORTB, DIO_PIN0, &value);
	while (BTNX)
	{
		DIO_ReadPin_Value(DIO_PORTB, DIO_PIN0, &BTNX);
	}
	_delay_ms(10);
	return value;
}