#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array of integers using the
* Binary search algo
* @array: ptr to the array
* @size: Number of elems in array
* @value: value to search for
* Return: first index where value is found,
* -1 if value is not present or array pointed to
* is NULL
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, mid_e;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		printf("Searching in array: ");
		for (mid_e = i; mid_e < j; mid_e++)
			printf("%d, ", array[mid_e]);
		printf("%d\n", array[mid_e]);

		mid_e = (i + j) / 2;

		if (array[mid_e] == value)
			return (mid_e);
		else if (array[mid_e] < value)
			i = mid_e + 1;
		else
			j = mid_e - 1;
	}

	return (-1);
}
