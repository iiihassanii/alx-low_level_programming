#include "main.h"

/**
 * print_triangle -  prints a square, followed by a new line.
 * @size: size of the square
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j, k, space;

		space = size - 1;
		for (i = 1; i <= size ; i++)
		{
			for (j = 0; j < space; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
				_putchar('#');
			_putchar('\n');
			space--;
		}
	}
}
