#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file to create
* @text_content: null terminated string to be written to the file
* Return: 1 on sucess -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	if (!filename)
		return (-1);

	int file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_desc < 0)
		return (-1);

	if (text_content !== NULL)
	{
		int strlen_t = strlen(text_content);

		ssize_t buffer = write(file_desc, text_content, strlen_t);

		if (buffer < 0)
			return (-1);
	}

	close(file_desc);
	return (1);

}
