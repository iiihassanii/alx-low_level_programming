#include "main.h"
/**
 * flip_bits - ....................
 * @n: .........
 * @m: ...........
 * Return: .....
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count = 0;

	diff = n ^ m;
	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}
	return (count);
}
