#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function
 * @grid : pointer
 * @height : int
 * Return: VOID
 */

void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}
