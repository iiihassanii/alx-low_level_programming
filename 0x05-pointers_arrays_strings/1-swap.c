#include "main.h"

/**
 * swap_int - swap
 *@a: pointer for the numer 1
 *@b: pointer for the numer 2
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
