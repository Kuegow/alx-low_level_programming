#include "main.h"

/**
 * _strlen_recursion - return string length with recursion
 * @s: points to a string
 *
 * Return: length (integer)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
