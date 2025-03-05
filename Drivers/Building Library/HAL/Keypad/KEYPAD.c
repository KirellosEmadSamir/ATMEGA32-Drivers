/*
* KEYPAD.c
*
 *  Author: Kirellos Emad Samir
*/

#include "KEYPAD.h"

const Uint8t KEYPAD [4][4]=
{
	{'1','4','7','C'},
	{'2','5','8','0'},
	{'3','6','9','='},
	{'+','-','*','/'}
};
void KEYPAD_Init(void)
{
	/*Define Direction For output pins for keypad*/
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_OUT_PIN0, DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_OUT_PIN1, DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_OUT_PIN2, DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_OUT_PIN3, DIO_PIN_OUTPUT);
	DIO_SetPin_Value(KEYPAD_PORT, KEYPAD_OUT_PIN0, DIO_PIN_HIGH);
	DIO_SetPin_Value(KEYPAD_PORT, KEYPAD_OUT_PIN1, DIO_PIN_HIGH);
	DIO_SetPin_Value(KEYPAD_PORT, KEYPAD_OUT_PIN2, DIO_PIN_HIGH);
	DIO_SetPin_Value(KEYPAD_PORT, KEYPAD_OUT_PIN3, DIO_PIN_HIGH);
	/*Define Direction For input Pins for Keypad*/
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_INP_PIN0, DIO_PIN_INPUT);
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_INP_PIN1, DIO_PIN_INPUT);
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_INP_PIN2, DIO_PIN_INPUT);
	DIO_SetPin_Direction(KEYPAD_PORT, KEYPAD_INP_PIN3, DIO_PIN_INPUT);
	DIO_SetPULLUP(KEYPAD_PORT, KEYPAD_INP_PIN0);
	DIO_SetPULLUP(KEYPAD_PORT, KEYPAD_INP_PIN1);
	DIO_SetPULLUP(KEYPAD_PORT, KEYPAD_INP_PIN2);
	DIO_SetPULLUP(KEYPAD_PORT, KEYPAD_INP_PIN3);
}
Uint8t KEYPAD_READ(void)
{
	Uint8t LOC_ROW = 0;
	Uint8t LOC_COL = 0;
	Uint8t temp = 0, Val = 0;
	for(LOC_COL = COL_INIT; LOC_COL <= COL_FINAL; LOC_COL++)
	{
		DIO_SetPin_Value(KEYPAD_PORT, LOC_COL, DIO_PIN_LOW);
		for(LOC_ROW = ROW_INIT; LOC_ROW <= ROW_FINAL; LOC_ROW++)
		{
			DIO_ReadPin_Value(KEYPAD_PORT, LOC_ROW, &temp);
			if(!temp)
			{
				Val = KEYPAD[LOC_ROW - ROW_INIT][LOC_COL - COL_INIT];
				while (!temp)
				{
					DIO_ReadPin_Value(KEYPAD_PORT, LOC_ROW, &temp);
				}
				_delay_ms(10);
			}
		}
		DIO_SetPin_Value(KEYPAD_PORT, LOC_COL, DIO_PIN_HIGH);
	}
	return Val;
}