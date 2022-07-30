/*
 * Temp_Sensor.h
 *
 * Created: 12/04/2022 02:15:33 م
 *  Author: Kirellos Emad Samir
 */ 


#ifndef TEMP_SENSOR_H_
#define TEMP_SENSOR_H_
#include "CPU_CONFIGURATION.h"

void Temp_Sensor_Init(void);

Uint16t Temp_Sensor_Read(void);




#endif /* TEMP_SENSOR_H_ */