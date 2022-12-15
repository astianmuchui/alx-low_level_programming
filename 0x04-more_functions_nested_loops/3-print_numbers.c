#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a new line
 */

void print_numbers(void)
{
	int m = 0;

	while (m < 10)
	{
		_putchar(m + '0');
		m++;
	}
	_putchar('\n');
}
