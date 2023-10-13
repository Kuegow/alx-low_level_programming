#include <stdio.h>
#include "variadic_functions.h"

#include <stdarg.h>

/**
 * print_numbers - prints numbers with a separator
 * @separator: the separator
 * @n: number of integers passed to function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
