/*
* BIT_MATH.h
*
 *  Author: Kirellos Emad Samir
*/


#ifndef BIT_MATH_H_
#define BIT_MATH_H_
/*Macros like function*/
#define SET_BIT(REG,BIT)	 REG |= (1<<BIT)
#define CLR_BIT(REG,BIT)	 REG &=~ (1<<BIT)
#define GET_BIT(REG,BIT)	 ((REG>>BIT)&1)
#define TGL_BIT(REG,BIT)     REG ^= (1<<BIT)
#define Get_LOW_Nibble(REG)  REG & 0x0F //HexaDecimal 
#define Get_HIGH_Nibble(REG) (REG>>4) & 0b00001111 //Binary
#define GET_PORT(REG) REG & 0xFF
#define TGL_PORT(REG) REG ^= 0xFF
#endif /* BIT_MATH_H_ */