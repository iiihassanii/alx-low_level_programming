#include "main.h"

/**
 * clear_bit - .....
 * @n: .....
 * @index: ...
 * Return: ...
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p = 0;

	if (index > 64)
		return (0);
	p = ~(p << index);
	*n = *n & p;
	return (1);
}
