#include "main.h"

/**
 * _strcmp - function that compares two strings.
 *@s1: pointer for the number
 *@s2: idk
 * Return: s1
 */

int _strcmp(char *s1, char *s2)
{
	int eq;

	eq = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			eq = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (eq);
}
