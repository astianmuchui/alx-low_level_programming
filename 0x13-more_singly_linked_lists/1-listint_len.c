#include "lists.h"

/**
 * listint_len - return the count of elements
 * in a linked list
 * @h: list
 * Return: no of elements in list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int elems = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		elems++;
	}

	return (elems);
}
