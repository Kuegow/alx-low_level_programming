#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#include "main.h"

/**
 * create_file - create a file amd write to it
 * @filename: name of file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_des;
	char *buffer;
	ssize_t w;
	mode_t original_umask;

	if (filename == NULL)
		return (-1);

	original_umask = umask(0);

	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_des == -1)
	{
		umask(original_umask);
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";

	buffer = malloc(strlen(text_content) + 1);
	if (buffer == NULL)
	{
		close(file_des);
		umask(original_umask);
		return (-1);
	}
	strncpy(buffer, text_content, strlen(text_content) + 1);

	w = write(file_des, buffer, strlen(buffer));

	free(buffer);
	close(file_des);
	umask(original_umask);

	if (w == -1)
		return (-1);

	return (1);
}
