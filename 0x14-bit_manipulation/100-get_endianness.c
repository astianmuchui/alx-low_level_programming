#include "main.h"

/**
 * get_endianness - checks the endianess of the machine
 * Return: 1 if a little endian and 0 incase of a big endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	return (*c == 1); /* if true LE else BE */
}
