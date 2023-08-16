#include "main.h"

/**
 * _islower - check lowercase character
 * @c: - lowercase character
 *
 * Return: 1 if lowercase, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
