#include "main.h"

/**
 * set_bit - hthxht..
 * @n: ...
 * @index: .dy.y.
 * Return: ....
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p = 1;
	if (index > 64)
		return (0);
	p <<= index;
	*n += p;
	return (*n);
}
