#include "main.h"

/**
* print_binary - prints a number in binary form
* @n: number to print
* Return: none
*/

void print_binary(unsigned long int n)
{
	int j;

	for (j = 31; j >= 0; j--)
	{
		if ((n & (1 << j)) != 0)
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
