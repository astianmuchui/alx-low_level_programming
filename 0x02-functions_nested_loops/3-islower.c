#include "main.h"

/**
* _islower - check for the ascii value of a character
* Return: 1 if true and 0 if false
*/

int _islower(int c)
{
	/* Check for the range of ascii values.
	*  Ranges from 97-122 for lowercase characters
	*/

	int ascii = (int) c;

	if (ascii >= 97 && ascii <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
