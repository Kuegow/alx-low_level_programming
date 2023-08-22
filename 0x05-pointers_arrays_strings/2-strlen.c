#include "main.h"

/**
 * _strlen - function that prints length of a string
 * @s: string to be counted
 *
 * Return: count on success
 */
int _strlen(char *s)
{
	int i = 0, count = 0;

		while (s[i] != '\0')
		{
			count++;
			i++;
		}
	return (count);
}
