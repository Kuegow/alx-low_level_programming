#include "main.h"


/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: points to the bit to be manipulated
 * @index: indexof bit to be set. Starting from 0
 *
 * Return: 1 on success. else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1;
	mask <<= index;
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;

	return (1);
}
