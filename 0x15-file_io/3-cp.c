#include "main.h"

/**
* main - copy the file contents from one file to another
* @argc: argument count
* @argv: argument values, array of size argc
* Return: 0 on sucess, no. of error if fails
*/

int main(int argc, char *argv[])
{
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to", exit(97));
	int file_desc_f = open(argv[1], O_RDONLY);

	if (file_desc_f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Cam't read from file %s\n", argv[1]);
		exit(98);
	}
	int file_desc_t = open(O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_desc_t == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	ssize_t read_ff, write_t;

	while (read_ff > 0)
	{
		read_ff = read(file_desc_f, buffer, 1024);

		if (read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(99);
		write_t = write(file_desc_t, buffer, read_ff);

	if (write_t == -1)
		dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
		return (0);
	}
	int close_f = close(file_desc_f);

	if (close_f < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc_f), exit(100);
	int close_t = close(file_desc_t);

	if (close_t == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc_t), exit(100);
	return (0);
}
