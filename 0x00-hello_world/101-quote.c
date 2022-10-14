#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int size = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	int standardError = 2;
	write(standardError, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", size);
	return (1);
}
