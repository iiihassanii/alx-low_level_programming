#include "search_algos.h"
#include <math.h>

/**
 * binary_search - binary_search algos
 * @array: pointer to the first element of the array to search in.
 * @size: size is the number of elements in array.
 * @value: And value is the value to search for
 * Return: If value is not present in array or if
 * array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			printf(" %d", array[i]);
			if (i + 1 != right + 1)
				printf(",");
			else
				printf("\n");
		}

		mid = ((right + left) / 2);

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
