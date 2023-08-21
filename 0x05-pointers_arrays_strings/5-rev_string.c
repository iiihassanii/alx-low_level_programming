#include "main.h"

/**
 * rev_string - function that reverses a string.
 *@s: pointer for the string
 * Return: Void
 */

void rev_string(char *s)
{
	int len, i, end;
	char tmp;

	len = 0;
	i = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	end = len;
	while (i <= end / 2)
	{
		tmp = s[i];
		s[i] = s[end];
		s[end] = tmp;
		i++;
		end--;
	}
}
