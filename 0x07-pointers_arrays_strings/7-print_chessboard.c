#include "main.h"

/**
 * print_chessboard - print_chessboard
 * @a: pointer
 * Return : void
 */

void print_chessboard(char (*a)[8])
{
	int len, j, i, sign;

	for (len = 0, j = 0; a[len][j] != '\0' && j < 8; len++,  j++)
		;
	for (i = 0; i < len; i++)
	{
		sign = 0;
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != ' ')
			{
				_putchar(a[i][j]);
				sign = 1;
			}
		}
		if (sign == 1 && i != len - 1)
			_putchar('\n');
	}
}
