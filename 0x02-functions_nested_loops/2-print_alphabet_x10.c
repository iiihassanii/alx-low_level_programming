#include "main.h"

/**
 * print_alphabet_x10 - Description: A C program that print
 *
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
}
