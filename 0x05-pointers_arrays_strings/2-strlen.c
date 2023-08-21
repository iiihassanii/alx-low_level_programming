#include "main.h"

/**
 * _strlen - returns the length of a string.
 *@s: the string
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		*s++;
		len++;
	}
	return (len);
}
