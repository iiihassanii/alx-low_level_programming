#include "main.h"

/**
 *  reverse_array -  reverses the content of an array of int
 *@a: array
 *@n:the number of elements of the array
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
