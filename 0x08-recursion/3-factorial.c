#include "main.h"

/**
 * factorial - finds factorial of a number
 * @n: number
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
