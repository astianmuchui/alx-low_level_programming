#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - assign a random number to the variable n each time it is executed.
  * prints the last digit of the number stored in the variable n.
  * Return: 0 exit code of the program if successful.
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
