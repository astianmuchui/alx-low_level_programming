#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a node into a doubly linked list at an idx
* @h: head of the doubly linked list
* @idx: index
* @n: data
* Return: node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr, *tail;
	unsigned int idx_c = 0;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new != NULL)
	{
		new->n = n;
		if (idx <= 0)
		{
			new->next = *h;
			*h = new;
		}
		else
		{
			curr = *h;
			while (curr != NULL && idx_c < idx - 1)
			{
				curr = curr->next;
				idx_c++;
			}

			if (curr != NULL)
			{
				new->next = curr->next;
				curr->next = new;
			}
			else
			{
				tail = *h;
				while (tail->next != NULL)
				{
					tail = tail->next;
				}
				tail->next = new;
			}
		}
	}
	return (*h);
}
