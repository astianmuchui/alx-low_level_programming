#include "main.h"

/**
* get_bit - get value of a bit at an index
* @n: number
* @index: index
* Return: value of bit or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = 1UL << index;

	return ((n & m) ? 1 : 0);
}
