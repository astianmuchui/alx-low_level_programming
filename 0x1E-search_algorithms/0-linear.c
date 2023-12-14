#include "search_algos.h"

/**
* linear_search - searches for a number in an array of integers using the
* Linear search algo
* @array: ptr to the array
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located,
* -1 if value is not present
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		i++;
	}

	return (-1);
}
