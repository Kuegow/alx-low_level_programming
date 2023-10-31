#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#include "main.h"

/**
 * read_textfile - read a textfile and print to the POSIX standard output
 * @filename: pointer to textfile
 * @letters:  number of letters to read and print
 *
 * Return: number of letters able to print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_read_1;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		exit(0);

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
		exit(0);

	bytes_read_1 = write(STDIN_FILENO, buffer, bytes_read);

	if (bytes_read_1 == -1)
		exit(0);

	free(buffer);
	close(fd);

	return (bytes_read_1);
}
