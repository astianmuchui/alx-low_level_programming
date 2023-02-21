#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 and 5 below 1024
 * Return: 0 if succesfully executed
 */

int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}

	printf("%d\n", b);
	return (0);
}
