#include "main.h"
#include <ctype.h>

/**
 * times_table - Description: A C program that print
 *
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0 ; i < 10; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (k < 10)
			{
				if (j == 0)
					_putchar(' ');
				_putchar(k + 48);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
