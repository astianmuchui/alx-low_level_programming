#include "lists.h"

/**
* free_dlistint - frees a doubly linked list
* @head: head of the doubly linked list
* Return: none
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *dlis, *current = head;

	while (!current)
	{
		dlis = current;
		current = current->next;
		free(dlis);
	}
	free(head);
}
