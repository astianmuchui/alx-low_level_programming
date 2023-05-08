#include "main.h"

/**
 * append_text_to_file - appends text to an existing file
 * @filename: file name
 * @text_content: content to append to file
 * Return: 1 if success, -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t wr_ite;
	int fdesc;

	fdesc = open(filename, O_RDWR | O_APPEND);

	if (fdesc == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		wr_ite = write(fdesc, text_content, strlen(text_content));
		if (wr_ite == -1)
			return (-1);
	}

	close(fdesc);
	return (1);
}
