#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of a string
 * @str: source string
 *
 * Return: duplicate string on success
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(strlen(str) + 1);

	if (s == NULL)
		return (NULL);

	strcpy(s, str);

	return (s);
}
