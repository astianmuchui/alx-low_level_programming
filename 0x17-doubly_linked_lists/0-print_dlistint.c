#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: head
 * Return: count
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}

