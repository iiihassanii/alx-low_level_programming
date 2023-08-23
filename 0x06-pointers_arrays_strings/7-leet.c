#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @s: string
 * Return: enconde string
 */

char *leet(char *s)
{
	int i;
	int j;
	int k;

	char str[] = "oOlLeEaAtT";
	char num[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (str[j] != '\0')
		{
			if (s[i] == str[j])
			{
				k = j;
				s[i] = num[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
