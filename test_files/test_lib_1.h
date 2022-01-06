/** @file       test_lib_1.h
 *  @brief      Test functions
 *  @copyright  (c) 2022- Evren Kenanoglu - All Rights Reserved
 *              Permission to use, reproduce, copy, prepare derivative works,
 *              modify, distribute, perform, display or sell this software and/or
 *              its documentation for any purpose is prohibited without the express
 *              written consent of Evren Kenanoglu.
 *  @author     Evren Kenanoglu
 *  @date       06/01/2022
 */
#ifndef FILE_TEST_LIB_1_H
#define FILE_TEST_LIB_1_H

/** INCLUDES ******************************************************************/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <stdint.h>
/** CONSTANTS *****************************************************************/

/** TYPEDEFS ******************************************************************/

/** MACROS ********************************************************************/

/** VARIABLES *****************************************************************/

/** FUNCTIONS *****************************************************************/

uint32_t* isNull(void* ptr);
uint32_t sizeOfArray(const char *ptr);
uint32_t factorial(uint32_t number);

#undef INTERFACE // Should not let this roam free

#endif // FILE_TEST_LIB_1_H
