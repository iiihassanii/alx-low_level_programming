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
	char ch = 'a';
	char uch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (uch <= 'Z')
	{
		putchar(uch);
		uch++;
	}
	putchar('\n');
	return (0);
}
