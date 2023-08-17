#include "main.h"
#include <ctype.h>

/**
 * print_line - Description: A C program that print
 *
 * @n: input
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}

}
