#include <stdlib.h>

#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: array size
 * @cmp: points to function used to compare values
 *
 * Return:  index of the first element
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int num;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		exit(EXIT_FAILURE);

	while (i < size)
	{
		num = cmp(array[i]);

		if (num != 0)
		{
			return (i);
		}
		i++;
	}

	return (num - 1);
}
