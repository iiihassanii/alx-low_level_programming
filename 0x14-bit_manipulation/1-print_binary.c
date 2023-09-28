#include "main.h"

/**
 * print_binary - print binary
 * @n: decimal number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	printf("%ld", n % 2);
}
