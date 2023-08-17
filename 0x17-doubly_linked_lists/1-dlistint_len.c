#include "lists.h"

/**
* dlistint_len - returns the length of a linked list
* @h: head node
* Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}

