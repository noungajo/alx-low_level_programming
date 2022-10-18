#include "main.h"

/**
 * Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Prototype: void jack_bauer(void);
 * You can listen to this soundtrack while coding :)
 * Description: using the main function
 * Return: void
 */


void jack_bauer(void)
{
	int h, m;
	
	h = m = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}

