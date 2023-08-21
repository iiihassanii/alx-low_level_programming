#include "main.h"

/**
 * rev_string - function that reverses a string.
 *@s: pointer for the string
 * Return: Void
 */

void rev_string(char *s)
{
	int len, i;

	len = 0;
	i = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	char ch[len];

	while (i <= len)
	{
		ch[i] = s[i];
		i++;
	}
	i--;
	len = 0;
	while (i >= 0)
	{
		s[len] = ch[i];
		len++;
		i--;
	}
}
