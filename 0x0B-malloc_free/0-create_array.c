#include "main.h"
#include <stdlib.h>

/**
 * create_array - initializes an array of chars with
 * a specific char.
 * @size: size of the array
 * @c: the specific char
 *
 * Return: arr
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
