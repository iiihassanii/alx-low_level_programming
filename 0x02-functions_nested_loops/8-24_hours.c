#include "main.h"
#include <ctype.h>

/**
 * jack_bauer - Description: A C program that print
 *
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i < 24 ; i++)
	{
		if (i < 10)
			_putchar('0');
		_putchar(i);
		_putchar(':');
		for (j = 0 ; j < 60 ; j++)
		{
			if (j < 10)
				_putchar('0');
			_putchar(j);
		}
	}
}
