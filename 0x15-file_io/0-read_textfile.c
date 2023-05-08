#include "main.h"

/**
 * read_textfile - read a text file and prints it out  to the
 * std output
 * @filename: name of file
 * @letters: number of letters
 * Return: no of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_r, letters_w;
	int fdesc, buffer_s = letters;
	char *buffer;

	if (filename == NULL)
		return (0);

	fdesc = open(filename, O_RDONLY);
	if (fdesc == -1)
		return (0);

	buffer = malloc(sizeof(char) * buffer_s);
	if (buffer == NULL)
		return (0);

	letters_r = read(fdesc, buffer, buffer_s);
	if (letters_r == -1)
	{
		free(buffer);
		return (0);
	}

	letters_w = write(STDOUT_FILENO, buffer, letters_r);
	if (letters_w == -1 || letters_w != buffer_s)
	{
		free(buffer);
		return (0);
	}

	close(fdesc);
	free(buffer);
	return (letters_r);
}
