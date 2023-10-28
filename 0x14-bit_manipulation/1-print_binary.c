#include "main.h"

void to_binary(unsigned long int n);

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to binary
 *
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		to_binary(n);
}


/**
 * to_binary - converts decimal to binary
 * @n: decimal
 *
 */
void to_binary(unsigned long int n)
{
	if (n == 0)
		return;
	to_binary(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
