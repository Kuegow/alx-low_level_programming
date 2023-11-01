#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#include "main.h"


/**
 * append_text_to_file - append  text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at end of file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	ssize_t w;
	char *buffer;
	
	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_APPEND);

	if (file_des == -1)
		return (-1);

	if (text_content == NULL)
		text_content = '\0';

	buffer = malloc(strlen(text_content) + 1);

	if (buffer == NULL)
	{
		close(file_des);
		return (-1);
	}

	strncpy(buffer, text_content, strlen(text_content));

	w = write(file_des, buffer, strlen(buffer));

	if (w == -1)
		return (-1);

	free(buffer);
	close(file_des);

	return (1);
}
