#include "main.h"

/**
 * find_sqrt - find the square root
 * @n: number
 * @guess: guess answer starting with num 1
 *
 * Description: Divides n by 2 to reduce recursion,
 * as the square root should not > n/2
 * Return: square root
 */
int find_sqrt(int n, int guess)
{
	const int range = n / 2;

	if (guess * guess == n)
		return (guess);

	if (guess > range)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, guess + 1));
	}
}


/**
 * _sqrt_recursion - find square root of a number
 * @n: number
 *
 * Description: The square root must be a natural number,
 * if not, return -1
 * Return: 0 if n is 0, -1 if n < 0. Otherwise
 * calls function to find square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	else
		return (find_sqrt(n, 1));
}
