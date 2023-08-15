#include "main.h"
#include <ctype.h>

/**
 * print_to_98 - Description: A C program that print
 *
 * @n: in[ut
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n ; count > 98 ; count--)
		{
			printf("%d, ", count);
		}
	else
		for (count = n ; count < 98 ; count++)
			printf("%d, ", count);
	printf("98\n");
}
