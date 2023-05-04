#include "main.h"

/**
* set_bit - set the value of a bit to 1 at an index
* @n: ptr to number
* @index: index
* Return: 1 or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	if (n == NULL)
		return (-1);
	if (index > 63)
		return (-1);

	*n |= (i << index);

	return (1);
}
