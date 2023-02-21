#include "main.h"
/**
* _isalpha - check for alphabetic character
* @c: character to undergo test
* Return: 1 if true or 0 if false
*/

int _isalpha(int c)
{
	int ascii = (int) c;

	/**
	* characters range from 65-90 and 97-122
	*/

	if ((ascii >= 65 && ascii <= 97) || (ascii >= 97 && ascii <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
