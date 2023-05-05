#include "main.h"

/**
* get_bit - get value of a bit at an index
* @n: number
* @index: index
* Return: value of bit or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;

	int val = n & 1;

	return (val);
}
