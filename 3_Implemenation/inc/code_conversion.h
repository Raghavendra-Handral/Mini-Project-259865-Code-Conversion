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
#include <stdio_ext.h>

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


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */