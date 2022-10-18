#include "main.h"

/**
 * main - Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Prototype: void print_alphabet_x10(void);
 * You can only use _putchar twice in your code
 * Description: using the main function
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;
	
	for (i = 0; i < 10; i++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
