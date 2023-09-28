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
		return (0);
	while (*b)
	{
		if (*b == '1' || *b == '0')
			result = result * 2 + (*b++ - '0');
		else
			return (0);
	}
	return (result);
}
