#include "main.h"

/**
 * _strncpy - function that copies a string.
 *@dest: pointer for str 1
 *@src: pointer for str 2
 *@n : number
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0 ; len < n && src[len] != '\0' ; len++)
	{
		dest[len] = src[len];
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
