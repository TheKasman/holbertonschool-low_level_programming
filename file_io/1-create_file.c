#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file to create
 * @text_content: a string to use for content
 * Return: returns 1 on success
 */


int create_file(const char *filename, char *text_content)
{
	ssize_t bytesWritten;
	int fd;
	int length = 0;


	/*is this blank?*/
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/*did it go wrong?*/
	if (fd == -1)
		return (-1);

	/*write stuff*/
	if (text_content != NULL)
	{
		/*Damn you STRLEN WHY YOU NO LEGAL?*/
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

	/*we did it*/
	return (1);
}
