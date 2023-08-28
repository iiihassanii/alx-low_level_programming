#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: Returns a pointer to dest
 * @src: memory area src.
 * @n: number of copies bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
