#include <stdlib.h>
#include "main.h"

/**
 * 
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height);
	if (width <= 0 || height <= 0 || array <= 0)
		return (0);
	else
	{
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(int) * width);
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
	}
	return (array);
}
