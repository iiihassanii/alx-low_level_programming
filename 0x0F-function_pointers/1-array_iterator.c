#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter
 *
 * @array: array
 * @size: size of the array
 * @action: pointet to function
 *
 * Return: VOID
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
