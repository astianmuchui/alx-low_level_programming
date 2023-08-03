#include "main.h"

/**
* flip_bits - returns number of bits you would need
* to flip one number to another
* @n: first number
* @m: second number
* Return: number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_diff = n ^ m;

	unsigned int count = 0;

	while (xor_diff)
	{
		count += xor_diff & 1;
		xor_diff >>= 1;
	}

	return (count);
}
