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

#include "../test_files/test_lib_1.h"

int main(void)
{
	// while(1)
	// {printf("Hello World!\n");
	// Sleep(1000);}
	
	printf("%d Factorial = %d ",5, factorial(5));
	return EXIT_SUCCESS;
}
