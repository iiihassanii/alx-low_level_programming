#include "main.h"

/**
 * rev_string - function that reverses a string.
 *@s: pointer for the string
 * Return: Void
 */

void rev_string(char *s)
{
	int len, i;
	char tmp;

	for (len = 0; s[len] != '\0'; ++len)
		;
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - len - i];
		s[len - len - i] = tmp;
	}
}
