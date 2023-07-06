#include "main.h"

/**
* print_binary - prints a number in binary form
* @n: number to print
* Return: void
*/

void print_binary(unsigned long int n)
{
	int j;

	for (j = 1 << 31; j > 0; j = j / 2)
	{
		if ((num & j) == 1)
		{
			_putchar("1");
		}
		else
		{
			_putchar("0");
		}
	}
	_putchar('\n');
}
