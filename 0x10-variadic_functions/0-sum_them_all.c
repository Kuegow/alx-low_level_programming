#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all of its parameters
 * @n: first number
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list lst;

	if (n == 0)
		return (0);

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst, int);
	}
	va_end(lst);
	return (sum);
}
