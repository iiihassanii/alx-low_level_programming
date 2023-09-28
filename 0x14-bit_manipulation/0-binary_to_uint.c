#include "main.h"

/**
 * binary_to_uint - converts a binary number to int
 * @b: binary
 * return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (NULL);
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
