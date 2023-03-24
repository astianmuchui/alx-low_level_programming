#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - Get the sum
* @n: number of arguments
* @...: integers to add
* Return: Sum or 0
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list list;

		va_start(list, n);

		int i;

		int sum = 0;

		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, int);
		}

		va_end(list);
	}
	return (sum);
}
