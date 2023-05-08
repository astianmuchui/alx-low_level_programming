#include "main.h"
/**
 * main - copies the contents of one file to another one
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success or number of error on fail
 */

int main(int argc, char *argv[])
{
	ssize_t write, read;
	int fdesc_1, fdesc_2, close;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fdesc = open(argv[1], O_RDONLY);
	if (fdesc_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdesc_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdesc_2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),	exit(99);

	while (read > 0)
	{
	read = read(fdesc_1, buffer, 1024);
	if (read == -1)
	{	dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
		return (0); }
	write = write(fd_2, buf, rd);
	if (write == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),  exit(99);
		return (0); }
	}
	close = close(fd);
	if (close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	close = close(fd_2);
	if (close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2), exit(100);
	return (0);
}
