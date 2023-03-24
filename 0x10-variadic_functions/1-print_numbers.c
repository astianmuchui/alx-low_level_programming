#include "variadic_functions.h"

/**
* print_numbers - prints numbers with seperator
* @seperator: seperator
* @n: mumber of integers
* Return: NULL
*/

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args_ptr;

	va_start(args_ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(agr_ptr, int));

		if (seperator && i < (n - 1))
			printf("%s", seperator);
	}

	va_end(args_ptr);
}
