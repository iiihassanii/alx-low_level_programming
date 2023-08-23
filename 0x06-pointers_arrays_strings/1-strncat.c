#include "main.h"

/**
 * _strncat - concatenates two strings.
 *@dest : pointer to str
 *@src : pointer to str2
 *@n: pointer for the number
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len])
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
