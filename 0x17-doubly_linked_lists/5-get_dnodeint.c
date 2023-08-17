#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: head of the dlistinit_t linked list
* @index: index of the node
* Return: node or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (!head)
		return (NULL);

	while (head && idx < index)
	{
		head = head->next;
		idx++;
	}

	if (head)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
