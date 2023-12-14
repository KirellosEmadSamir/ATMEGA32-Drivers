/*
 * I2C.h
 *
 * Created: 8/12/2021 2:51:14 AM
 *  Author: Kirellos Emad Samir
 */ 
//Master Transmitter Slavr Receiver


#ifndef I2C_H_
#define I2C_H_
#include "CPU_CONFIGURATION.h"

void I2C_Init(unsigned long SCL_Clock);
void I2C_Start(void);
void I2C_Write(unsigned char cByte);
void I2C_Stop();



#endif /* I2C_H_ */