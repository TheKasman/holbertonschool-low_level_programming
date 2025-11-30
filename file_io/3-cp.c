#include "main.h"

/**
 * main - the main function to copy one file to another
 * @argc: argument counter
 * @argv: argument vector
 * Return: returns 0 on success
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	ssize_t bytesRead, bytesWritten;
	int fd_from;
	int fd_to;

	if (argc != 3)
	{	dprintf(2, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{	dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{	dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while ((bytesRead = read(fd_from, buffer, 1024)) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);
		if (bytesWritten == -1)
		{	dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99); }
	}
	if (bytesRead == -1)
	{	dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98); }
	if (close(fd_from) == -1)
	{	dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100); }
	if (close(fd_to) == -1)
	{	dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100); }
	return (0);
}
