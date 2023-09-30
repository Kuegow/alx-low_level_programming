#include "main.h"

/**
 * _pow_recursion - return x raised to the powrr of y
 * @x: base number
 * @y: exponent
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}

	if (y == 1)
	{
		return (x * 1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
