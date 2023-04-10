#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the
 * standard output
 * @filename: file
 * @letters: number of letters
 * Return: letters read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_read, letters_wrote;
	int fd, buff_size = letters;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * buff_size);
	if (buff == NULL)
		return (0);

	letters_read = read(fd, buff, buff_size);
	if (letters_read == -1)
	{
		free(buff);
		return (0);
	}

	letters_wrote = write(STDOUT_FILENO, buff, letters_read);
	if (letters_wrote == -1 || letters_wrote != buff_size)
	{
		free(buff);
		return (0);
	}

	close(fd);
	free(buff);
	return (letters_read);
}
