#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - check allocation
 *
 * @b : allocated memory
 * Return:pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	{
		return (98);
	}
	return (i);
}
