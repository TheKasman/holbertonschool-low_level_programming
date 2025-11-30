#include "main.h"

/**
 * append_text_to_file - appends text to an already existing file
 * @filename: the file
 * @text_content: the text to append
 * Return: returns 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytesWritten;
	int fd;
	int length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		bytesWritten = write(fd, text_content, length);
		if (bytesWritten == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
