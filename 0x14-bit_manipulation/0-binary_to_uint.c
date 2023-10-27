#include <string.h>

#include "main.h"


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 *
 * Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total = 0;
	int decimal = 1;
	int length = strlen(b);

	if (b == NULL)
		return (0);

	for (i = length - 1; i >= 0; i--)
	{
		switch (b[i])
		{
		case '1':
			total += decimal;
			break;
		case '0':
			break;
		default:
			return (0);
		}
		decimal *= 2;
	}

	return (total);
}
