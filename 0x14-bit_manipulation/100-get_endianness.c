#include "main.h"

/**
* get_endianness - check the endianness
* Return: 0 if big and 1 if small endian
*/

int get_endianness(void)
{
	unsigned int n = 1;
	char *ch = (char *) &n;

	return (*ch == 1); /* Bool */
}
