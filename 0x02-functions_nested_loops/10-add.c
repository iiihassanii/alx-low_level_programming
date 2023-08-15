#include "main.h"
#include <ctype.h>

/**
 * add - Description: A C program that print
 *
 * @n1: input
 * @n2 : inpdfff
 *
 * Return: 1 if c is letter, lowercase or uppercase - 0 otherwise
 */

int add(int n1, int n2)
{
	n1 = n1 + n2;
	if (n1 > 9)
	{
		_putchar((n1 / 10) + 48);
		_putchar((n1 % 10) + 48);
	}
	else
		_putchar(n1 + 48);
}
