#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at an index
 * @n: ptr to int
 * @index: index of the bit
 * Return: 1 if a success and -1 if a fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
