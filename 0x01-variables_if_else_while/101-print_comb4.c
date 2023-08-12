#include <stdio.h>

/**
 * main - combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, y, p;

	for (n = '0'; n <= '9'; n++)
	{
		for (y = n + 1; y <= '9'; y++)
		{
			for (p = y + 1; p <= '9'; p++)
			{
			putchar(n);
			putchar(y);
			putchar(p);

			if (n < '7' || y < '8' || p < '9')
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
