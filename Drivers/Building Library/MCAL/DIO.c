/*
* DIO.c
*
 *  Author: Kirellos Emad Samir
*/

#include "DIO.h"
/*Function Implementations*/
/*Functions for PINS*/
void DIO_SetPin_Direction(Uint8t port, Uint8t pin, Uint8t direction)/*Define Direction for pin(Ip/Op)*/
{
	switch(direction)
	{
		case DIO_PIN_INPUT:
		switch(port)
		{
			case DIO_PORTA:
			CLR_BIT(DDRA, pin);
			break;
			case DIO_PORTB:
			CLR_BIT(DDRB, pin);
			break;
			case DIO_PORTC:
			CLR_BIT(DDRC, pin);
			break;
			case DIO_PORTD:
			CLR_BIT(DDRD, pin);
			break;
		}
		break;
		case DIO_PIN_OUTPUT:
		switch(port)
		{
			case DIO_PORTA:
			SET_BIT(DDRA, pin);
			break;
			case DIO_PORTB:
			SET_BIT(DDRB, pin);
			break;
			case DIO_PORTC:
			SET_BIT(DDRC, pin);
			break;
			case DIO_PORTD:
			SET_BIT(DDRD, pin);
			break;
		}
		break;
	}
}
void DIO_SetPin_Value(Uint8t port, Uint8t pin, Uint8t value)/*Output Mode*/
{
	switch(value)
	{
		case DIO_PIN_LOW:
		switch (port)
		{
			case DIO_PORTA:
			CLR_BIT(PORTA, pin);
			break;
			case DIO_PORTB:
			CLR_BIT(PORTB, pin);
			break;
			case DIO_PORTC:
			CLR_BIT(PORTC, pin);
			break;
			case DIO_PORTD:
			CLR_BIT(PORTD, pin);
			break;
		}
		break;
		case DIO_PIN_HIGH:
		switch (port)
		{
			case DIO_PORTA:
			SET_BIT(PORTA, pin);
			break;
			case DIO_PORTB:
			SET_BIT(PORTB, pin);
			break;
			case DIO_PORTC:
			SET_BIT(PORTC, pin);
			break;
			case DIO_PORTD:
			SET_BIT(PORTD, pin);
			break;
		}
		break;
	}
}
void DIO_TogglePin(Uint8t port, Uint8t pin)/*Toggle Output Mode*/
{
	switch(port)
	{
		case DIO_PORTA:
		TGL_BIT(PORTA, pin);
		break;
		case DIO_PORTB:
		TGL_BIT(PORTB, pin);
		break;
		case DIO_PORTC:
		TGL_BIT(PORTC, pin);
		break;
		case DIO_PORTD:
		TGL_BIT(PORTD, pin);
		break;
	}
}
void DIO_ReadPin_Value(Uint8t port, Uint8t pin, Uint8t* value)/*Input Mode*/
{
	switch(port)
	{
		case DIO_PORTA:
		*value = GET_BIT(PINA, pin);
		break;
		case DIO_PORTB:
		*value = GET_BIT(PINB, pin);
		break;
		case DIO_PORTC:
		*value = GET_BIT(PINC, pin);
		break;
		case DIO_PORTD:
		*value = GET_BIT(PIND, pin);
		break;
		
	}
}
/*Functions for PORTS*/
void DIO_SetPort_Direction(Uint8t port, Uint8t direction)/*Define Direction for Port(Ip/Op)*/
{
	switch(port)
	{
		case DIO_PORTA:
		PORTA = direction;
		break;
		case DIO_PORTB:
		PORTB = direction;
		break;
		case DIO_PORTC:
		PORTC = direction;
		break;
		case DIO_PORTD:
		PORTD = direction;
		break;
	}
}
void DIO_SetPort_Value(Uint8t port, Uint8t value)/*Output Mode*/
{
	switch(port)
	{
		case DIO_PORTA:
		PORTA = value;
		break;
		case DIO_PORTB:
		PORTB = value;
		break;
		case DIO_PORTC:
		PORTC = value;
		break;
		case DIO_PORTD:
		PORTD = value;
		break;
	}
}
void DIO_TogglePort(Uint8t port)/*Toggle Output Mode*/
{
	switch(port)
	{
		case DIO_PORTA:
		TGL_PORT(PORTA);
		break;
		case DIO_PORTB:
		TGL_PORT(PORTB);
		break;
		case DIO_PORTC:
		TGL_PORT(PORTC);
		break;
		case DIO_PORTD:
		TGL_PORT(PORTD);
		break;
	}
}
void DIO_ReadPort_Value(Uint8t port, Uint8t* value)/*Input Mode*/
{
	switch(port)
	{
		case DIO_PORTA:
		*value = PORTA;
		break;
		case DIO_PORTB:
		*value = PORTB;
		break;
		case DIO_PORTC:
		*value = PORTC;
		break;
		case DIO_PORTD:
		*value = PORTD;
		break;
	}
}
/*Activate Pull up Resistor*/
void DIO_SetPULLUP(Uint8t port, Uint8t pin)
{
	switch (port)
	{
		case DIO_PORTA:
		SET_BIT(PORTA, pin);
		break;
		case DIO_PORTB:
		SET_BIT(PORTB, pin);
		break;
		case DIO_PORTC:
		SET_BIT(PORTC, pin);
		break;
		case DIO_PORTD:
		SET_BIT(PORTD, pin);
		break;
	}
}