#include "main.h"

/**
 * Write a function that prints the last digit of a number.
 * Prototype: int print_last_digit(int);
 * Returns the value of the last digit
 * Description: using the main function
 * Return: void
 */


int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}

