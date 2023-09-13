#include "function_pointers.h"

/**
  * int_index - function that searches for an integer.
  * @array: string
  * @size: size of string
  * @cmp: pointer
  *
  * Return: int
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
					return (i);
		}
	}
	return (-1);
}
