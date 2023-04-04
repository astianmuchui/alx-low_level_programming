#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a particular index
 * of the list
 * @head: head element
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if did not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	prev_node = *head;
	while (i < index)
	{
		prev_node = node;
		node = node->next;
		if (node == NULL)
			return (-1);
		i++;
	}

	prev_node->next = node->next;
	free(node);
	return (1);
}
