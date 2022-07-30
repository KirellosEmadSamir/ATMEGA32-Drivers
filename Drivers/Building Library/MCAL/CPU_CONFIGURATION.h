
/*
 * CPU_CONFIGURATION.h
 *
 *  Author: Kirellos Emad Samir
 */ 


#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_

#undef F_CPU /*Remove previous definition*/
#define F_CPU 16000000UL/*16 MegaHz(16 Million)*/
#include <util/delay.h>
#include <avr/interrupt.h>
//#include <avr/io.h> /*All registers are Pre-Defined here*/
#include "ATMEGA32_REGISTERS.h"
#include "DIO.h"

#endif /* CPU_CONFIGURATION_H_ */