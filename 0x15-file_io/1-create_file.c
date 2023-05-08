#include "main.h"

/**
 * create_file - create a file
 * @filename: file name
 * @text_content: content of the file
 * Return: 1 on success -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t write;
	int fdesc;

	if (filename == NULL)
		return (-1);

	fdesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fdesc == -1)
		return (-1);

	if (text_content != NULL)
	{
		write = write(fd, text_content, strlen(text_content));
		if (write == -1)
			return (-1);
	}

	close(fdesc);
	return (1);
}
