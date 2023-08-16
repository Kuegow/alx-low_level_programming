#include "main.h"

/**
 * _isalpha - check for alphabets (lower/uppercase)
 * @c: - character to be checked
 *
 * Return: 1 if true otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
