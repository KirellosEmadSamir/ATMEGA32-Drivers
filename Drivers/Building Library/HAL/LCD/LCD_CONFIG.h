/*
 * LCD_CONFIG.h
 *
 *  Author: Kirellos Emad Samir
 */ 


#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

#include "CPU_CONFIGURATION.h"

#define LCD_Mode 4

#define LCD_4BIT_CMD_PORT DIO_PORTB
#define LCD_4BIT_DTA_PORT DIO_PORTA

#define LCD_8BIT_CMD_PORT DIO_PORTB
#define LCD_8BIT_DTA_PORT DIO_PORTA

#define LCD_RS DIO_PIN1
#define LCD_RW DIO_PIN2
#define LCD_EN DIO_PIN3

#define LCD_DTA0 DIO_PIN0
#define LCD_DTA1 DIO_PIN1
#define LCD_DTA2 DIO_PIN2
#define LCD_DTA3 DIO_PIN3
#define LCD_DTA4 DIO_PIN4
#define LCD_DTA5 DIO_PIN5
#define LCD_DTA6 DIO_PIN6
#define LCD_DTA7 DIO_PIN7

#define LCD_OUTPUT DIO_PIN_OUTPUT

#endif /* LCD_CONFIG_H_ */