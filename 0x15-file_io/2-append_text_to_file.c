#include "main.h"

/**
 * append_text_to_file - adds content to an existing file
 * @filename: name of the file
 * @text_content: content to add to the file
 * Return: 1 if success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_desc = open(filename, O_RDWR | O_APPEND);

	if (f_desc == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{

	ssize_t	write = write(fd, text_content, strlen(text_content));

		if (write < 0)
			return (-1);
	}

	close(f_desc);
	return (1);
}
