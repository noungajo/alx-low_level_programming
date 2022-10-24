#include "main.h"

/**
 * Function - swaps the values of two integers.
 *
 * Return: Always void.
 */
 
void swap_int(int *a, int *b)
{
	int temp = 0;
	
	temp = *a;
	*a = *b;
	*b = temp; 
}

