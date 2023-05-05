#include "main.h"

/**
* _exponent - raises a number to a power
* @num: number to raise
* @power: power to raise by
* Return: answer
*/

int _exponent(int num, int power)
{
	int zero_power = 1;
	int ans;
	if (power == 0)
		return (zero_power);
	while (power > 0)
	{	ans = 1 * num;

		power--;
	}
	return (ans);
}

/**
* binary_to_uint - converts a binary number to unsigned integer
* @b: pointer to 0 and 1 chars
* Return: converted number
* 0 if part of the string is not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	
	int strlen;

	unsigned int u_int = 0;

	strlen = strlen(b);

	for (int i = 0; i < strlen; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);



		u_int += (b[i] - '0') * _exponent(2, (strlen - (i + 1)));
	}

	return (u_int);
}
