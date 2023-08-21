#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: destination string
* @src: source string
* Return: pointer to resulting string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}

/**
* _strncat - concatenates two strings
* @dest: destination string
* @src: source string
* @n: number of bytes to copy
* Return: pointer to resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}

/**
* _strncpy - copies a string
* @dest: destination string
* @src: source string
* @n: number of bytes to copy
* Return: pointer to resulting string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: difference between strings
*/

int _strcmp(char *s1, char *s2)
{
	int i, diff = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		diff = s1[i] - s2[i];

		if (diff != 0)
		{
			break;
		}
	}

	return (diff);
}

/**
* _memset - fills memory with a constant byte
* @s: memory area to fill
* @b: constant byte
* @n: number of bytes to fill
* Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
