#include "lists.h"

/**
 * pop_listint - remove the head node of a linked list
 * @head: Head node of the linked list
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);

	node = *head;
	*head = node->next;
	n = node->n;

	free(node);
	return (n);
}
