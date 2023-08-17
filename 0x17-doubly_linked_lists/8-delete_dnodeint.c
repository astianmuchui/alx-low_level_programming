#include "lists.h"

/**
* delete_dnodeint_at_index - deletes a node of a linked list
* @head: head node
* @index: index of the node to be deleted
* Return: 1 or -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *prev, *next;
	unsigned int idx_t = 0;

	if (!head)
		return (-1);

	curr = *head;
	while (curr && idx_t < index)
	{
		curr = curr->next;
		idx_t++;
	}

	if (!curr)
	{
		/* Index out of range */
		return (-1);
	}

	prev = curr->prev;
	next = curr->next;

	if (prev)
		prev->next = next;
	else
		*head = next;

	if (next)
		next->prev = prev;

	free(curr);
	return (1);
}
