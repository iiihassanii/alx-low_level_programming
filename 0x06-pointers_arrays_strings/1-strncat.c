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
	int len;

	for (len = 0; *dest != '\0'; len++)
		dest++;
	for (len ; n >= 0 && *src != '\0'; len++, n--)
	{
		*dest++ = *src++;
	}
	dest -= len;
	return (dest);
}
