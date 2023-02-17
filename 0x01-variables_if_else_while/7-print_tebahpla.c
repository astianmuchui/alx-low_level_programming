#include <stdio.h>

/**
  * main - prints the lowercase alphabet in reverse
  * Return: 0 exit code if successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
