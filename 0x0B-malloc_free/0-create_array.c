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
	if (size == 0 || c == 0)
		return (0);
	char *ptr = malloc(sizeof(char) * size);
	while (size--)
		ptr[size]= c;
	return (ptr);
}
