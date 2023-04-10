#include "main.h"

/**
 * flip_bits - returns number of bits
 * needed to flip to get from a num to another
 * @n: initial num to flip from
 * @m: target number to flip to
 * Return: number of bits flipped to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, xor = n ^ m;

	while (xor)
	{
		if (xor & 1)
			count++, xor >>= 1;
		else
			xor >>= 1;
	}

	return (count);
}
