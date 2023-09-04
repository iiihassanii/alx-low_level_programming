#include <stdlib.h>
#include "main.h"

/**
 * create_array - array
 *
 * @size : size of array
 * @c : save c
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size);

	if (size == 0 || c == 0)
		return (0);
	while (size--)
		ptr[size]= c;
	return (ptr);
}
