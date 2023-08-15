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
	int sum;
	sum = n1 + n2;
	if (sum > 9)
	{
		_putchar((sum / 10) + 48);
		_putchar((sum % 10) + 48);
	}
	else
		_putchar(sum + 48);
	return (0);
}
