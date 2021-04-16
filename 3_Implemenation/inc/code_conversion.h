/**
 * @file code_conversion.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CODE_CONVERTER_H__
#define __CODE_CONVERTER_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * @brief To convert binary code to gray code
 * 
 * @param b binary_code
 * @return unsigned int gray_code 
 */
unsigned int b2g(unsigned int b);

/**
 * @brief To convert gray code to binary code
 * 
 * @param g gray_code 
 * @return unsigned int binary_code
 */
unsigned int g2b(unsigned int g);

/**
 * @brief To convert binary code to decimal
 * 
 * @param bin1 binary_code
 * @return unsigned int decimal_code
 */
unsigned int b2d(unsigned int bin1);

/**
 * @brief To convert decimal code to binary code
 * 
 * @param dec2 decimal_code
 * @return unsigned int binary_code
 */
unsigned int d2b(unsigned int dec2);




#endif  /* #define __CODE_CONVERTER_H__ */