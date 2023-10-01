#include "main.h"

/**
 * find_prime - find if number is prime
 * @n: number
 * @i: divisor
 *
 * Return: 1 if prime, 0 if false
 */
int find_prime(int n, int i)
{
	const int range = n / 2;

	if (n % i == 0)
		return (0);

	if (i > range)
		return (1);
	return (find_prime(n, i + 1));
}


/**
 * is_prime_number - check if input is prime
 * @n: number/input
 *
 * Return: 0 if not prime, or 1 if prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, 2));
}
