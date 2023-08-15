#include "main.h"

/**
 * main - Entry point
 *
 * Description: A C program that print
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char str[] = "_putchar";
	int len;

	for (len = 0 ; len < 8 ; len++)
		_putchar(str[len]);
	_putchar("\n");
	return (0);
}
