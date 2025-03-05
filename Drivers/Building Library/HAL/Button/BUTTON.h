/*
 * BUTTON.h
 *
 *  Author: Kirellos Emad Samir
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "CPU_CONFIGURATION.h"

#define PRESSED 1
#define NOT_PRESSED 0


void BTN_Init(void);
Uint8t BTN_Read(void);

#endif /* BUTTON_H_ */