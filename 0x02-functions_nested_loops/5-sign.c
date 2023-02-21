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
	int status;

	if (n > 0)
	{
		_putchar('+');
		status = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		status = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		status = -1;
	}
	return (status);
}
