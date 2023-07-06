#include "main.h"

/**
* _exponent - raise a number to a power
* @num: number to raise
* @power: power to exponent with
* Return: int answer
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
	int str_len, i;
	unsigned int u_int = 0;

	if (b == NULL)
		return (0);

	str_len = strlen(b);


	for (i = 0; i < str_len; i++)
	{
		if (b[i] != '0' && b[i] != '1') /* Handle invalid binary reps */
			return (0);

		u_int += (b[i] - '0') * _exponent(2, (str_len - (i + 1)));
	}

	return (u_int);
}

