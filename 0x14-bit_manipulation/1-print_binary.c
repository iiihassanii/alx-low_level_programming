#include "main.h"

/**
 * print_binary - print binary
 * @n: decimal number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;

	if (n > 1)
		print_binary(n >> 1);
	i = (n & 1);
	printf("%d", i);
}
