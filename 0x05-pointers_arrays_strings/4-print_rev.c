#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *@s: pointer for the number
 * Return: Void
 */

void print_rev(char *s)
{
	int len =0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	len--;
	while (len >= 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
