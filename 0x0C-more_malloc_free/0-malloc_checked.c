#include <stdlib.h>
#include "main.h"

/**
 * 
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
