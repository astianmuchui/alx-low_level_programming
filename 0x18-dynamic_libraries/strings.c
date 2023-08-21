#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _islower - checks for case of a character
* @c: ascii val
* Return: 1 if lowercase 0 else
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}

/**
* _isalpha - checks for alphabetic character.
* @c: ascii value
* Return: 1 if c is a letter, 0 else
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
* _abs - computes the absolute value of an integer
* @x: int to be checked
* Return: absolute value of int
*/

int _abs(int x)
{
	if (x >= 0)
		return (x);
	return (-x);
}

/**
* _isupper - checks for uppercase
* @c: ascii val
* Return: 1 if c is uppercase, 0 else
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
