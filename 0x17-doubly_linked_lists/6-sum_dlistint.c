#include "lists.h"

/**
* sum_dlistint - return the sum of all n's in a dlistint_t linked list
* @head: head
* Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
