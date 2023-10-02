#include "main.h"


/**
 * find_pal - checks if string is palindrome
 * @s: points to string
 * @a: string index
 * @e: string length
 *
 * Return: 1 if true, else 0
 */
int find_pal(char *s, int a, int e)
{
	if (a == e)
		return (1);

	if (s[a] != s[e])
		return (0);

	if (a < e + 1)
		return (find_pal(s, a + 1, e - 1));
	return (1);
}


/**
 * str_len - find string length
 * @s: points to string
 *
 * Return: string length
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}


/**
 * is_palindrome - check if string is a palindrome
 * @s: points to string
 *
 * Return: 1 if true . Otherwise 0
 */
int is_palindrome(char *s)
{
	int n = str_len(s);

	if (n == 0)
		return (1);
	return (find_pal(s, 0, n - 1));
}
