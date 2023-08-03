#include "main.h"

/**
* print_binary - prints a number in binary form
* @n: number to print
* Return: none
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	if (n & 1)
	{
		_putchar('1');
	}

	else
	{
		_putchar('0');
	}
}
