/*
* STD_TYPES.h
*
 *  Author: Kirellos Emad Samir
*/


#ifndef STD_TYPES_H_
#define STD_TYPES_H_

#define HIGH 1
#define LOW 0

typedef unsigned char Uint8t;//0----255
typedef unsigned short int Uint16t;
typedef unsigned long int Uint32t;

typedef signed char Int8t;//-127---127
typedef signed short int Int16t;
typedef signed long int Int32t;

typedef float Fint32t;
typedef double Dint64t;

typedef enum
{
	STD_LOW=0,
	STD_HIGH=1
}STD_levelType;


#endif /* STD_TYPES_H_ */