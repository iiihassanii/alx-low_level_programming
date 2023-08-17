#include "main.h"
/**
 *_isdigit - check the code
 *@c: int to be checked if intiger or not
 * Return: Returns 1 if c is a digit
*Returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
