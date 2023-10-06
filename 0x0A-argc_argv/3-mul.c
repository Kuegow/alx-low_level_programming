#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two  numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success. Otherwise 1
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i;
		int mul = 1;

		for (i = 1; i < argc; i++)
		{
			mul *= atoi(*(argv + i));
		}
		printf("%d\n", mul);
		return (0);
	}
}
