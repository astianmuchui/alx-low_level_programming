#include "main.h"

/**
 * get_bit - returns the bit value at a given index
 * @n: decimal
 * @index: index of the bit
 * Return: value at index provided
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
