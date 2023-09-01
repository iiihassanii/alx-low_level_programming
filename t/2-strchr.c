#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s:string
 * @c:first occurrence of the character
 * Return: c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c; i++)
	{
		if (s[i] == '\0')
			return (NULL);
	}
	return (s + i);
}
