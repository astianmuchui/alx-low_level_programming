#include "main.h"

/**
 * set_bit - sets a bit to 1 at a provided index
 * @n: ptr to int
 * @index: index of bit
 * Return: 1 if a success and -1 if a fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index > 63)
		return (-1);

	*n |= (1 << index);

	return (1);
}
