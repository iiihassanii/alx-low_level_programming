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
		print_binary(n / 2);
	i = (n % 2) + '0';
	_putchar(i);
}
