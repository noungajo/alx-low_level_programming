#include "main.h"

/**
 * main - Write a function that prints the 9 times table, starting with 0.
 * Prototype: void times_table(void);
 * Format: see example
 * Description: using the main function
 * Return: void
 */


void times_table(void)
{
	int i, j, s;
	
	i = j = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			s = i * j;
			if (s < 10) 
			{
				if (j != 0)
				{	
					_putchar(' ');
				}
				_putchar(s + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				
				}
				
			}else
			{
				_putchar((s / 10) + '0');
				_putchar((s % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

