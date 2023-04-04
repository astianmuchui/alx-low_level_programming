#include "lists.h"

/**
 * free_listint2 - sets the head node value to NULL
 * @head: Head node
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;

	next_node = *head;
	while (*head != NULL)
	{
		*head = next_node->next;
		free(next_node);
		next_node = *head;
	}

	*head = NULL;
}
