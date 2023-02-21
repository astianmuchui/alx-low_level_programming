#include "main.h"
/**
* print_sign - print the sign of an int
* @n: integer to be tested
* Return: 0 and print 0 if n is 0
*  1 and print + if n > 0
* -1 and print - if n < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
