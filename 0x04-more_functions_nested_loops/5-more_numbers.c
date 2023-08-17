#include "main.h"
#include <ctype.h>

/**
 * more_numbers - from 0 to 9, followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0, j = 0;

	for (i ; i < 10 ; i++)
	{
		for (j ; j < 15 ; j++)
		{
			if (i >= 10)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
