#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that print
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nu = 48;

	while (nu <= 102)
	{
		putchar(nu);
		if (nu == 57)
			nu+= 39;
		nu++;
	}
	putchar('\n');
}
