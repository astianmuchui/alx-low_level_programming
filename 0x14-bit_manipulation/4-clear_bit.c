#include "main.h"

/**
* clear_bit - set the value of a bit to 0 at an index
* @n: pointer to the int
* @index: index starting from 0 of the bit to set
* Return: 1 or -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (n == NULL)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
