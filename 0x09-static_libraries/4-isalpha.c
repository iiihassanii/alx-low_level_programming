#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Description: A C program that print
 *
 * @c: input
 *
 * Return: 1 if c is letter, lowercase or uppercase - 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
