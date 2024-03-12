#include "search_algos.h"
#include <math.h>
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;
	size_t i = 0;

	if (!array || value == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf(" %d", array[i]);
			if (i + 1 != right + 1)
				printf(",");
			else
				printf("\n");
		}

		mid = floor((right + left) / 2);

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid;
		else
			return (mid);
	}
	return (-1);
}