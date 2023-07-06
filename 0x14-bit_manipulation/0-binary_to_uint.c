#include "main.h"

/**
* binary_to_uint - converts a binary number to unsigned integer
* @b: pointer to 0 and 1 chars
* Return: converted number
* 0 if part of the string is not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;
	int length = strlen(b);

	if (b == NULL)
		return (0);

	for (i = 0; i < length; i++)
	{
		if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else if (b[i] == '0')
		{
			result = result << 1;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
