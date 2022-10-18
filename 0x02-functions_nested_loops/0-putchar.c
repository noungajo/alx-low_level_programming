#include "main.h"

/**
 * 0-putchar - Write a program that prints _putchar, followed by a new line.
 * The program should return 0
 * Return: On success 1.
 * The program should return 0
 */


int main(void)
{
	int i;
	
	for (i = 0;  "_putchar"[i] != '\0'; ++i)
	{
		_putchar("_putchar"[i]);
	}
	_putchar('\n');
	return(0);
}
