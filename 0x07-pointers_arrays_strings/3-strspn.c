#include "main.h"

/**
 * _strspn - gets the length of
 *  a prefix substring.
 *  @s: initial segment
 *  @accept: consist byte
 *  Return: lenght
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
