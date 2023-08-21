#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *@str: pointer for str
 * Return: Void
 */

void puts_half(char *str)
{
	int len, i;

	i = 0;
	for (len = 0; str[len] != '\0'; ++len)
		;
	if (len % 2 != 0)
		i = (len - 1) / 2;
	else
		i = len / 2;
	for (; i <= len && str[i] != '\0'; i++)
		_putchar(str[i]);
}
