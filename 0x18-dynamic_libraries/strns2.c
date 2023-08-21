#include "main.h"

/**
* _isdigit - checks for a digit (0 through 9)
* @c: int to be checked
* Return: 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
* _strlen - count string length
* @s: string to count
* Return: number
*/

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}

/**
* _puts - writes a character
* @s: str ptr
* Return: 0 or -1
*/

void _puts(char *s)
{
	for (size_t i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}

/**
* _strcpy - copy string from src to dest to src
* @dest: destination
* @src: source
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
* _atoi - convert a string to an integer
* @s: string to convert
* Return: integer
*/

int _atoi(char *s)
{
	int i, sign = 1, num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}

	return (num * sign);
}
