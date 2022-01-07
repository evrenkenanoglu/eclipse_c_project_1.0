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

double findMedian(const char *filePath)
{
	char line[MAX_LINE_LENGTH] = {0};
	unsigned int line_count = 0;
	double array[80] = {0};
	int temp = 0;
	char *chPtr;
	double median;

	/* Open file */
	FILE *file = fopen(filePath, "r");

	if (!file)
	{
		perror(filePath);
		return FALSE;
	}

	/* Get each line until there are none left */
	while (fgets(line, MAX_LINE_LENGTH, file))
	{
		/* Print each line */
		printf("line[%06d]: %s", ++line_count, line);

		/* Add a trailing newline to lines that don't already have one */
		if (line[strlen(line) - 1] != '\n')
			printf("\n");

		double temp_value = strtod(line, &chPtr);
		if(temp_value < (-70) || temp_value > 2.08*pow(10,9))
		{
			printf("Value is out of range");
			return FALSE;
		}
		array[line_count - 1] = temp_value;
		printf("\n");
		printf("Value %.2f", array[line_count - 1]);
		printf("\n");
	}

	for (uint32_t i = 0; i < line_count; i++)
	{
		// Sort the array in ascending order
		for (int i = 0; i < line_count; i++)
		{
			for (int j = i + 1; j < line_count; j++)
			{
				if (array[i] > array[j])
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
	}

	printf("Elements of array sorted in ascending order: \n");
	for (int i = 0; i < line_count; i++)
	{
		printf("%.2f ", array[i]);

	}
	printf("\n");
	// Finding Median Value
	// if number of elements are even
	if (line_count % 2 == 0)
	{
		printf("Values are used for median: %.2f and %.2f",array[(line_count - 1) / 2] ,array[line_count / 2]);
		median = (array[(line_count - 1) / 2] + array[line_count / 2]) / 2.0;
	}
	// if number of elements are odd
	else
	{
		printf("Value is used for median: %.2f", array[line_count / 2]);
		median = array[line_count / 2];
	}
	printf("\n");
	printf("Media Value is: %.2f", median);

	/* Close file */
	if (fclose(file))
	{
		return FALSE;
		perror(filePath);
	}
	return median;
}

/** LOCAL FUNCTION DEFINITIONS ************************************************/
