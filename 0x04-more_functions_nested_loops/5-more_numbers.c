#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i = 0, j = 0;

	for (i ; i > 10 ; i++)
	{
		for (j ; j > 15 ; j++)
		{
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
