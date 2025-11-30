#include "main.h"

/**
 * read_textfile - reads the textfile and prints it to POSIX output
 * @filename: the file
 * @letters: the text itself.
 * Return: returns the amount of things it could print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytesRead, bytesWritten;
	int fd;

	if (filename == NULL) /*Check*/
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1) /*EVERYTHING*/
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /*that could*/
	{
		close(fd);
		return (0);
	}

	/*it goes to buffer for the size for it.*/
	bytesRead = read(*filename, buffer, letters);
	if (bytesRead == -1) /*go*/
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(fd);

	if (bytesWritten == -1 || bytesWritten != bytesRead) /*wrong*/
		return (0);

	return (bytesWritten);
}
