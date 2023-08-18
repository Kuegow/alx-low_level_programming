#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 *
 * Return: 1 if uppercase otherwise 0
 */
int _isupper(int c)
{
	if ((c >= 65 || c <= 90)
		&& (!(c >= 97 || c >= 122)))
		return (1);

	return (0);
}
