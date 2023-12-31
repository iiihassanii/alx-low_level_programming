#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *@s: a pointer to the memory area s
 *@b:constant byte
 *@n:bytes of the memory area pointed to
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
