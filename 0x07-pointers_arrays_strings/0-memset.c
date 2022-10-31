#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: mamory area to return
 * @b: constant byte
 * @n: size of bytes
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
