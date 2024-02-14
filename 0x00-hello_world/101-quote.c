#include <unistd.h>
#include <string.h>


/**
 * main - Entry point
 *
 * Return: 1 on success
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, s, strlen(s));

	return (1);
}
