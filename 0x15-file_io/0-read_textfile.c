#include "main.h"

/**
* read_textfile - reads a text file and outputs it
* @filename: name of the file
* @letters: number of letters to print/read
* Return: number of letters it was able to print sucessfully
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
		return (0);

	int file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor < 0)
		return (0);

	char *buffer = malloc(sizeof(char) * letters);

	int content = read(file_descriptor, buffer, letters);

	if (content < 0)
	{
		free(buffer);
		return (0);
	}

	/* Set null termination character */

	buffer[content] = "\0";

	close(file_descriptor);

	int write_out = write(STDOUT_FILENO, buffer, content);

	if (write_out < 0)
		free(buffer);
		return (0);

	free(buffer);
	return (write_out);

}
