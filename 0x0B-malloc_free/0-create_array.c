#include <stdlib.h>
#include "main.h"

/**
 * create_array - array
 *
 * @size : size of array
 * @c : save c
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	while (size--)
		ptr[size] = c;
	return (ptr);
}
