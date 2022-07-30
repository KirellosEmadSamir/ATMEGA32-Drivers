/*
 * DIO.h
 *
 *  Author: Kirellos Emad Samir
 */ 


#ifndef DIO_H_
#define DIO_H_
/*Macros*/
#include "DIO_CONFIG.h"
/*Functions Prototypes*/
/*Functions for PINS*/
void DIO_SetPin_Direction(Uint8t port, Uint8t pin, Uint8t direction);/*Define Direction for pin(Ip/Op)*/
void DIO_SetPin_Value(Uint8t port, Uint8t pin, Uint8t value);/*Output Mode*/
void DIO_TogglePin(Uint8t port, Uint8t pin);/*Toggle Output Mode*/
void DIO_ReadPin_Value(Uint8t port, Uint8t pin, Uint8t* value);/*Input Mode*/
/*Functions for PORTS*/
void DIO_SetPort_Direction(Uint8t port, Uint8t direction);/*Define Direction for Port(Ip/Op)*/
void DIO_SetPort_Value(Uint8t port, Uint8t value);/*Output Mode*/
void DIO_TogglePort(Uint8t port);/*Toggle Output Mode*/
void DIO_ReadPort_Value(Uint8t port, Uint8t* value);/*Input Mode*/
/*Activate Pull up Resistor*/
void DIO_SetPULLUP(Uint8t port, Uint8t pin);
#endif /* DIO_H_ */