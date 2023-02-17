#include <stdio.h>
/**
  * main - prints all possible combinations of single-digit numbers.
  * Return: 0 if program executes successfully
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
		{
			;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
