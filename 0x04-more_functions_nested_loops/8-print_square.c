#include "main.h"

/**
 * print_square - print square (shape like)
 * @size: integer for size of the shape
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i = 0;

		while (i < size)
		{
			int j = 1;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('#');
			_putchar('\n');
			i++;
		}
	}
}
