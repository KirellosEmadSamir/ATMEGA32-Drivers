/*
* ATMEGA32_REGISTERS.h
*
*  Author: Kirellos Emad Samirs
*/


#ifndef ATMEGA32_REGISTERS_H_
#define ATMEGA32_REGISTERS_H_
/************************************** Libraries ***********************************************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
/************************************** DIO-Registers *******************************************/
#define DDRA  (*(volatile Uint8t*)(0x3A))
#define PORTA (*(volatile Uint8t*)(0x3B))
#define PINA  (*(volatile Uint8t*)(0x39))

#define DDRB  (*(volatile Uint8t*)(0x37))
#define PORTB (*(volatile Uint8t*)(0x38))
#define PINB  (*(volatile Uint8t*)(0x36))

#define DDRC  (*(volatile Uint8t*)(0x34))
#define PORTC (*(volatile Uint8t*)(0x35))
#define PINC  (*(volatile Uint8t*)(0x33))

#define DDRD  (*(volatile Uint8t*)(0x31))
#define PORTD (*(volatile Uint8t*)(0x32))
#define PIND  (*(volatile Uint8t*)(0x30))
/************************************** ADC-Registers *******************************************/
#define ADMUX   (*(volatile Uint8t*) (0x27))
#define ADCSRA  (*(volatile Uint8t*) (0x26))
#define ADCH    (*(volatile Uint8t*) (0x25))
#define ADCL    (*(volatile Uint8t*) (0x24))
#define ADC_DTA (*(volatile Uint16t*)(0x24))
/************************************** INTERRUPT-Registers *******************************************/
#define SREG    (*(volatile Uint8t*) (0x5F))
#define GICR    (*(volatile Uint8t*) (0x5B))
#define GIFR    (*(volatile Uint8t*) (0x5A))
#define MCUCR   (*(volatile Uint8t*) (0x55))
#define MCUCSR  (*(volatile Uint8t*) (0x54))
/************************************** TIMER0-Registers *********************************************/
#define TCNT0  (*(volatile Uint8t*) (0x52))
#define TCCR0  (*(volatile Uint8t*) (0x53))
#define TIMSK  (*(volatile Uint8t*) (0x59))
#define OCR0   (*(volatile Uint8t*) (0x5C))

#endif /* ATMEGA32_REGISTERS_H_ */