#include "main.h"

/**
* get_bit - get value of a bit at an index
* @n: number
* @index: index
* Return: value of bit or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{

	int val = n & 1;

	n >>= index;
	return (val);
}
