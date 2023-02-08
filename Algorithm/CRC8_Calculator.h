/*********************************************************************************
 * @file            \Code\USER\Header file\CRC8_Calculator.h
 * @author          Howard
 * @date            2023-01-02 11:29:31
 * @lastEditTime    2023-01-03 08:14:07
 * @brief           CRC8计算单元
*********************************************************************************/

#ifndef _CRC8_CALCULATOR_H_
#define _CRC8_CALCULATOR_H_

//----------------------------------------------
//-- INCLUDE
//----------------------------------------------
#include "r_cg_macrodriver.h"
#include <stdio.h>

//----------------------------------------------
//-- DEFINE & ENUM   
//----------------------------------------------
#define	CRC8_BIG_ENDIAN			(0)
#define	CRC8_SMALL_ENDIAN		(1)
#define	CRC8_ENDIAN_TYPE		CRC8_SMALL_ENDIAN//(CRC8_BIG_ENDIAN)

/* 固定多项式因子 */
#define	POLY_NORMIAL_MSB		(0x31)	// (x^8 + x^5 + x^4 + 1)
#define	POLY_NORMIAL_LSB		(0x8C)	// (x^8 + x^5 + x^4 + 1)

//----------------------------------------------
//-- STRUCTURE
//----------------------------------------------

//----------------------------------------------
//-- EXTERN
//----------------------------------------------

//----------------------------------------------
//-- FUNCTION
//----------------------------------------------

unsigned char CRC8_Calc_Normal(unsigned char *ptr, unsigned char len);
void CRC8_Calc_CreateTable(unsigned char Polynormial);

unsigned char CRC8_Calc_Table(unsigned char *ptr, unsigned char len);

//----------------------------------------------
//-- End of file
//----------------------------------------------
#endif
