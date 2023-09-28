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

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	p = p << index;
	*n = *n | p;
	return (1);
}
