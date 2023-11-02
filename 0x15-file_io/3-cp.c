#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>


int file_to_file(char *, char *);

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc,  char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
			exit(97);
	}

	file_to_file(argv[1], argv[2]);

	return (0);
}


/**
 * file_to_file - copy the content of a file to another file
 * @file_from: source file containing string to copy
 * @file_to: destination file to copy string to
 *
 * Return: 1 on success
 */
int file_to_file(char *file_from, char *file_to)
{
	int fd1, fd2, end1, end2;
	ssize_t w, bytes_read;
	char *buffer;
	mode_t original_umask;

	buffer = malloc(strlen(file_from) * 1024);
	if (buffer == NULL)
		return (-1);
	strcpy(buffer, file_from);

	original_umask = umask(0);
	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd1 == -1 || fd2 == -1)
	{
		free(buffer);
		umask(original_umask);
		return (-1);
	}

	bytes_read = read(fd1, buffer, 1024);
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		free(buffer);
		umask(original_umask);
		exit(98);
	}

	w = write(fd2, buffer, bytes_read);
	if (w == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		free(buffer);
		umask(original_umask);
		exit(99);
	}

	free(buffer);
	umask(original_umask);
	end1 = close(fd1);
	end2 = close(fd2);
	if (end1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
			exit(100);
	}
	if (end2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
			exit(100);
	}
	return (1);
}
