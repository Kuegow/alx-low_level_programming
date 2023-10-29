#include <stdlib.h>

#include "main.h"


/**
 * free_grid - free a 2d grid created in alloc_grid function
 * @grid: pointer to the 2d array
 * @height: array row
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
