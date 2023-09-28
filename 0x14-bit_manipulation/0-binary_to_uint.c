#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: numbers
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b == '1')
			result = (result << 1) | 1;
		else if (*b == '0')
			result <<= 1;
		else
			return (0);
		b++;
	}
	return (result);
}
