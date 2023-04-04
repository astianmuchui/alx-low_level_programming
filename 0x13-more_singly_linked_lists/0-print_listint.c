#include "lists.h"

/**
 * print_listint - prints every elements of list a
 * listint_t list
 * @h: the target list
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
