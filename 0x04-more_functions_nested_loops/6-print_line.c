#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times to be printed
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (n <= 0)
			break;
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
