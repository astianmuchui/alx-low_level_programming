#include "lists.h"

/**
* add_dnodeint - creates a new head
* @head: head node
* @n: node data
* Return: Addr or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	/* Allocate enough memory for the node */
	node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (!node) /* Return null if it failed */
		return (NULL);

	/*
	* Assign data
	* Set the next node as the head node and prev NULL
	* Set the prev node for the head as the new node
	*/

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head != NULL)
		(*head)->prev = node;

	*head = node; /* New head */
	return (node);
}
