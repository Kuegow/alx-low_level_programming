#include <stdlib.h>

#include "function_pointers.h"


/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array.
 * @array: the array
 * @size: size of the array
 * @action: points to function that prints array element
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
