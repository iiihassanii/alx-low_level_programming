#include "main.h"

/**
 * _strcat -  concatenates two strings.
 *@dest: pointer for str 1
 *@src: pointer for str 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len])
		len++;
	for (i = 0 ; src[i]; i++)
	{
		dest[len++] = src[i++];
	}
	return (dest);
}
