#include "main.h"

/**
 * puts_recursion -  prints a string, followed by a new line.
 * @s : string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
