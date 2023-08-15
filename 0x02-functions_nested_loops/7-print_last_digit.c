#include "main.h"
#include <ctype.h>

/**
 * print_last_digit - Description: A C program that print
 *
 * @n: input
 *
 * Return: 1 if c is letter, lowercase or uppercase - 0 otherwise
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * (n % 10);
	else
		n = n % 10;
	return (n);
}
