/*
* SPI.h
*
* Created: 21/11/2023 8:00:16 PM
*  Author: Kirellos Emad Samir
*/


#ifndef SPI_H_
#define SPI_H_

#include "SPI_CONFIG.h"

void SPI_INIT(void);
void SPI_TRANSMIT(Uint8t data);
void SPI_RECEIVE(Uint8t* data);
void SPI_SLAVESELECT(Uint8t slave);

#endif /* SPI_H_ */


/*
typedef struct
{
Uint8t SPR0 : 1;
Uint8t SPR1 : 1;
Uint8t CPHA : 1;
Uint8t CPOL : 1;
Uint8t MSTR : 1;
Uint8t DORD : 1;
Uint8t SPE  : 1;
Uint8t SPIE : 1;
}SPCR_REG;

typedef struct
{
SPCR_REG SPCR;
Uint8t SPSR;
Uint8t SPDR;
}SPI_REG;

#define SPI  (volatile SPI_REG*)(0x2D)

void SPI_MASTER_INIT(void);

void SPI_SLAVE_INIT(void);

void SPI_MASTER_START_TRASNMIT(void);

void SPI_MASTER_STOP_TRASNMIT(void);

Uint8t SPI_TRANSIVIER(Uint8t Data);
*/