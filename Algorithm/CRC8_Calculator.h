/*********************************************************************************
 * @file            \Code\Algorithm\CRC8_Calculator.h
 * @author          Howard
 * @date            2023-01-02 11:29:31
 * @lastEditTime    2023-02-09 10:17:34
 * @brief           CRC8计算单元 默认小端格式
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

// 静态库定义 **************************************************
#define	CRC8_BIG_ENDIAN			(0)
#define	CRC8_SMALL_ENDIAN		(1)
#define	CRC8_ENDIAN_TYPE		CRC8_SMALL_ENDIAN

/* 固定多项式因子 */
#define	POLY_NORMIAL_MSB		(0x59)	// (x^6 + x^4 + x^3 + 1)
#define	POLY_NORMIAL_LSB		(0x9A)	// (x^6 + x^4 + x^3 + 1)

// ********************************************************

//----------------------------------------------
//-- STRUCTURE
//----------------------------------------------

//----------------------------------------------
//-- EXTERN
//----------------------------------------------

//----------------------------------------------
//-- FUNCTION
//----------------------------------------------

unsigned char CRC8_Calc_Normal(unsigned char Polynormial, const unsigned char *ptr, unsigned char len);
unsigned char CRC8_Calc_Table(const unsigned char *ptr, unsigned char len);

//----------------------------------------------
//-- End of file
//----------------------------------------------
#endif
