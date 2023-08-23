#include "main.h"

/**
 * _strcat -  concatenates two strings.
 *@dest: pointer for str 1
 *@src: pointer for str 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len;

	for (len = 0; *dest != '\0'; len++)
		dest++;
	for (len ; *src != '\0'; len++)
	{
		*dest++ = *src++;
	}
	dest -= len;
	return (dest);
}
