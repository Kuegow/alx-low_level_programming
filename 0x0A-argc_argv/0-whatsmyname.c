#include "main.h"
#include <stdio.h>

/**
 * main - program prints its name in the
 * command line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
