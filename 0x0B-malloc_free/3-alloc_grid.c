#include <stdlib.h>

#include "main.h"


/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers,
 * with each element initialized to zero
 * @width: array row
 * @height: array column
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]); /* frees prev allocated arrays before the failed one */
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
