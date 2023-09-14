#include "variadic_functions.h"

/**
 * sum_them_all- ......
 * @n: ...
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	int i, x, sum = 0;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);

}
