#include "main.h"


/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: points to the bit to be manipulated
 * @index: index, starting from 0 of the bit to be set
 *
 * Return: 1 on success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
