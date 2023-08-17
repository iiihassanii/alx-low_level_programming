#include "main.h"
#include <ctype.h>

/**
 * print_diagonal - Description: A C program that print
 *
 * @n: input
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;
		for(i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < n ; j++)
			{
				_putchar(' ');
			}
			_putchar('/');
		}
		

	}
}
