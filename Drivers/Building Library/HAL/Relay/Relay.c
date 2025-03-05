/*
 * Relay.c
 *
 *  Author: Kirellos Emad Samir
 */ 


#include "Relay.h"

void Relay_Init(void)
{
	SET_BIT(DDRC,2);
}
void Relay_ON(void)
{
	SET_BIT(PORTC,2);
}
void Relay_OFF(void)
{
	CLR_BIT(PORTC,2);
}
void Relay_TGL(void)
{
	TGL_BIT(PORTC,2);
}