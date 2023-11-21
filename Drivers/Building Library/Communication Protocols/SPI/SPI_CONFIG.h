/*
* SPI_Config.h
*
* Created: 21/11/2023 8:45:13 PM
*  Author: Kirellos Emad Samir
*/


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "CPU_CONFIGURATION.h"

/************************************** SPI-Registers*************************************************/
/*
#define SPCR (*(volatile Uint8t* )(0x2D))
#define SPSR (*(volatile Uint8t* )(0x2E))
#define SPDR (*(volatile Uint8t* )(0x2F))
*/

#define MASTER 0
#define SLAVE  1

#define SPI_MODE MASTER

#define MOSI 5
#define MISO 6
#define SCK  7
#define SS   4




#endif /* SPI_CONFIG_H_ */