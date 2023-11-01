#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

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
	int file_des, length;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_APPEND);

	if (file_des == -1)
		return (-1);

	if (text_content)
	{
		for (length = 0; text_content[length] != '\0'; length++)
			;

		w = write(file_des, text_content, length);

		if (w == -1)
			return (-1);
	}
	close(file_des);

	return (1);
}
