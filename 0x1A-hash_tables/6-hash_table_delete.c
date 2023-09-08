#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
* and frees memory
* @ht: hash table targeted
* Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *curr = NULL, *temp = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];

		while (curr != NULL)
		{
			temp = curr;
			curr = curr->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
