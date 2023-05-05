#include "main.h"

/**
* get_endianess - check the endianess
* Return: 0 if big and 1 if small endian
*/

int get_endianess(void)
{
	int num = 1;
	char *ch = (char *) &num;

	return (*ch == 1); /* one or zero */
}
