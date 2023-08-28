#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack : string
 * @needle : occurrence of the substring
 * Return: occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, fo;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		fo = 0;
		for (j = 0; needle[j] == haystack[i]; j++)
		{
			fo++;
			if (needle[fo] == '\0')
			return (haystack + i - fo + 1);
		}
	}
	return (NULL);
}
