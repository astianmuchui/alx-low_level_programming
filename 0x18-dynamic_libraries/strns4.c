#include "main.h"

/**
* _memcpy - copies memory
* @dest: destination area
* @src: source memory
* @n: no of bytes to copy
* Return: *dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
* _strchr - locates an instance of c in s
* @s: string to search
* @c: character to find
* Return: pointer to first occurrence of c in s,
* or NULL if not found
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}

/**
* _strspn - gets the length of a substr
* @s: string
* @accept: string to match from
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		if (s[i] != accept[j])
		{
			break;
		}
	}

	return (count);
}

/**
* _strpbrk - searches a string
* @s: string
* @accept: string to match
* Return: pointer to the byte in s
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}

/**
* _strstr - locates a substring
* @haystack: string
* @needle: substring
* Return: pointer to beginning of needle in haystack, or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}
