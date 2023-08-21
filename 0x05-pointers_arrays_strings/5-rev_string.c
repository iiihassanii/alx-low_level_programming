#include "main.h"

/**
 * rev_string - function that reverses a string.
 *@s: pointer for the string
 * Return: Void
 */

void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	_putchar('\n');
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
}
