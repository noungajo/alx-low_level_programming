#include "main.h"

/**
 * Write a function that computes the absolute value of an integer.
 * Prototype: int _abs(int);
 * FYI: The standard library provides a similar function: abs. Run man abs to learn more.
 * Description: using the main function
 * Return: void
 */


int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
