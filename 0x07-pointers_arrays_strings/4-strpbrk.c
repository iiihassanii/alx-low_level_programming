#include "main.h"

/**
 * _strpbrk - searches a string for any of a set
 * @s:byte in s that matches one of the bytes in accept
 * @accept: string
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (NULL);
}
