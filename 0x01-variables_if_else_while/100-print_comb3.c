#include <stdio.h>

/**
 * main - combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, y;

	for (n = 0; n <= 9; n++)
	{
		for (y = n + 1; y <= 9; y++)
		{
			putchar(n + '0');
			putchar(y + '0');

			if (n < 8 || y < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
