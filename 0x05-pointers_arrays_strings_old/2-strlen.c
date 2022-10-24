#include "main.h"

/**
 * Function - return the length of a string.
 *
 * Return: Always int.
 */
 
int _strlen(char *s)
{
	int count = 0;
	
	for (count = 0; s[count] != '\0'; ++count);
	
	return (count);
}

