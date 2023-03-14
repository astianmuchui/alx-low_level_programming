#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* create_array - create array of size n and initiate it with character c
* @size: the size of the desired array
* @c: the character to initialize with
* Return: NULL if size=0 ,  NULL if it fails ,
* pointer to the array if there is sucess
*/

void *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else if (size  !=  0)
	{
		char arr[]  =  malloc((sizeof(char) * size));

		if (s  ==  NULL)
		{
			return (NULL);
		}
		else
		{
			arr[0]  =  c;

			return (*arr);
		}
	}
}
