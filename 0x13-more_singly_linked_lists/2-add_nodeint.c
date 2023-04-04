#include "lists.h"

/**
 * add_nodeint - add a new node at the start
 * of the linked list
 * @head: the head of the list
 * @n: value of the new entry
 * Return: memory address of the new item or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
