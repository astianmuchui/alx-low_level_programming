#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	char *buffer;
	ssize_t read_l, write_l;

	if (filename == NULL)
		return (0);

	filedes = open(filename, O_RDONLY);

	if (filedes == -1)
		return (0);
    
	buffer = malloc(sizeof(char) * letters);
	read_l = read(filedes, buffer, letters);

	if (read_l == -1)
	{
		free(buffer);
		return (0);
	}

	write_l = write(STDOUT_FILENO, buffer, read_l);

	if (write_l == -1 || write_l != read_l)
	{
		free(buffer);
		return (0);
	}

	close(filedes);
	free(buffer);
	return (read_l);
}
