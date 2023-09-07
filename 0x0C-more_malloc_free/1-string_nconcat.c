#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, len, i;
	char *str;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; s1[len1] != '\0'; ++len1)
		;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2] != '\0'; ++len2)
		;
	}
	if (n < len2)
	{
		len2 = n;
	}
	len = len1 + len2;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < len2; i++)
		str[i + len1] = s2[i];
	str[len] = '\0';
	return (str);
}
