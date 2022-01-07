/*
 * main.c
 *
 *  Created on: 27 Dec 2021
 *      Author: EVREN KENANOGLU
 */

#include <stdio.h>
#include <process.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <math.h>

#include "../test_files/test_lib_1.h"

const char *path = "testFile.txt";
int main(void)
{
	if(findMedian(path) == 0.00)
	{
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

