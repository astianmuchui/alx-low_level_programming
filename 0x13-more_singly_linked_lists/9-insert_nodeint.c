#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * of the list
 * @head: list to traverse
 * @idx: index of the node to insert
 * @n: value
 * Return: address of the new node inserted
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *node;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	node = *head;
	while (i < idx)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
		i++;
	}

	newnode->next = node->next;
	node->next = newnode;

	return (newnode);
}
