#include "main.h"
#include <ctype.h>

/**
 * print_most_numbers - from 0 to 9, followed by a new line.
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = '9'; i <= '0'; i--)
	{
		if (i != '2' || i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
