#include <stdio.h>

/**
  * main - program that prints the alphabet in lowercase
  * Return: 0 exit code of the program if successful
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
