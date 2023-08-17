#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a doubly linked list
* @head: head node of the linked list
* @n: data to assign to the node
* Return: address of the node created or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}


	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;
	new->prev = current;
	new->next = NULL;

	return (new);
}
