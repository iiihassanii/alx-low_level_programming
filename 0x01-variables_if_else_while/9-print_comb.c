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
	int nu = 0;

	while (nu < 10)
	{
		putchar(nu + '0');
		if (nu < 9)
		{
			putchar(',');
			putchar(' ');
		}
		nu++;
	}
	putchar('\n');
	return (0);
}
