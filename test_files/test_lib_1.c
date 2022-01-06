/** @file       test_lib_1.c
 *  @brief      Test functions
 *  @copyright  (c) 2022- Evren Kenanoglu - All Rights Reserved
 *              Permission to use, reproduce, copy, prepare derivative works,
 *              modify, distribute, perform, display or sell this software and/or
 *              its documentation for any purpose is prohibited without the express
 *              written consent of Evren Kenanoglu.
 *  @author     Evren Kenanoglu
 *  @date       06/01/2022
 */
#define FILE_TEST_LIB_1_C

/** INCLUDES ******************************************************************/
#include "test_lib_1.h"

/** CONSTANTS *****************************************************************/

/** TYPEDEFS ******************************************************************/

/** MACROS ********************************************************************/
#if !defined(ARRAY_SIZE)
#define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif
/** VARIABLES *****************************************************************/

/** LOCAL FUNCTION DECLARATIONS ***********************************************/

/** INTERFACE FUNCTION DEFINITIONS ********************************************/

uint32_t *isNull(void *ptr)
{
    return (ptr == NULL) ? NULL : ptr;
}
uint32_t sizeOfArray(const char *ptr)
{
    return strlen(ptr);
}

uint32_t factorial(uint32_t number)
{
    if (number == 1 || number == 0)
        return 1;
    else
    {
        uint64_t sum = 1;
        for (size_t i = 0; i < number - 1; i++)
        {
            sum *= (number - i);
        }
        return sum;
    }
}
/** LOCAL FUNCTION DEFINITIONS ************************************************/
