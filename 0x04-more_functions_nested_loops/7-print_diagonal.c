#include "main.h"

/**
 * print_diagonal - draws a straight line
 * @n: number of times to be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int j = 0;

		while (j < n)
		{
			int i = 0;

			while (i < j)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
}
