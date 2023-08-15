#include "main.h"
#include <ctype.h>

/**
 * print_sign - Description: A C program that print
 *
 * @n: input
 *
 * Return: 1 if c is letter, lowercase or uppercase - 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (1);
}
