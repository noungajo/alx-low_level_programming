#include "main.h"

/**
 * main - Write a function that prints the alphabet, in lowercase, followed by a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 * Description: using the main function
 * Return: void
 */

void print_alphabet(void)
{
	char ch;
	
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
