#include "main.h"

/**
* print_binary - prints a number in binary form
* @n: number to print
* Return: none
*/

void print_binary(unsigned long int n)
{
	int b;

	for (b = 31; b >= 0; b--)
	{
		if ((n & (1 << b)) != 0)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

	}
	_putchar('\n');
}

