#include "main.h"

/**
 * Write a function that checks for lowercase character.
 * Prototype: int _islower(int c);
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 * Description: using the main function
 * Return: void
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
