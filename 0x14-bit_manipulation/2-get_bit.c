#include "main.h"

/**
 * get_bit - ....
 * @n: ....
 * @index: ...
 * Return: .....
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index >= 65)
		return (-1);

	hold = n >> index;
	return (hold & 1);
}
