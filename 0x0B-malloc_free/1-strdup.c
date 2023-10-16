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
	char *s = malloc(sizeof(*str));

	if (str == NULL || s == NULL)
	{
		return (NULL);
	}

	strcpy(s, str);

	return (s);
}
