#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: number to be checked for last digit
 *
 * Return: n and -n to print absolute num, a to print last digit
 */
int print_last_digit(int n)
{
	int a;

		if (n < 0)
			n = -n;
	a = n % 10;

		if (a < 0)
			a = -a;

		_putchar(a + '0');

		return (a);
}
