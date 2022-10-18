#include "main.h"

/**
 * Write a function that checks for alphabetic character.
 * Prototype: int _isalpha(int c);
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * Description: using the main function
 * Return: void
 */


int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
