#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char base16[] = "0123456789abcdef";
	int n = 0;

	while (n < 16)
	{
		putchar(base16[n]);
		n++;
	}
	putchar('\n');
	return (0);
}
