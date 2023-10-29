#include <stdlib.h>
#include <string.h>

#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 *
 * Return: concatenated string s1
 */
char *str_concat(char *s1, char *s2)
{
	size_t i;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s3 = malloc(strlen(s1) + strlen(s2) + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		s3[i] = s1[i];
	}

	for (i = 0; i < strlen(s2); i++)
	{
		s3[i + strlen(s1)] = s2[i];
	}

	return (s3);
}
