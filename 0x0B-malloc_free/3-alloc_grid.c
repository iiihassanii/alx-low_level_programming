#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - 2D array
 *
 * @width : width of array
 * @height : geight of array
 *
 * Return : pointer
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height);
	if (width <= 0 || height <= 0 || array == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == 0)
		{
			while (i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
