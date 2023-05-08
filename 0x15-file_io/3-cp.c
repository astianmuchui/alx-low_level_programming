#include "main.h"
/**
 * main - copies the contents of one file to another one
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success or number of error on fail
 */

int main(int argc, char *argv[])
{
	ssize_t w_rite, r_ead;
	int fdesc_1, fdesc_2, c_lose;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fdesc_1 = open(argv[1], O_RDONLY);
	if (fdesc_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdesc_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdesc_2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),	exit(99);

	while (r_ead > 0)
	{
	r_ead = read(fdesc_1, buffer, 1024);
	if (r_ead == -1)
	{	dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
		return (0); }
	w_rite = write(fdesc_2, buffer, r_ead);
	if (w_rite == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),  exit(99);
		return (0); }
	}
	c_lose = close(fdesc_1);
	if (c_lose == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdesc_1), exit(100);
	c_lose = close(fdesc_2);
	if (c_lose == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdesc_2), exit(100);
	return (0);
}
