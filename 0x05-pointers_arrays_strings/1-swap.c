#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: first value to be swaped
 * @b: second value to be swaped
 */
void swap_int(int *a, int *b)
{
	int storeA = *a;
	*a = *b;
	*b = storeA;
}
