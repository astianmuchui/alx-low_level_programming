#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table to look into
* @key: key to look at
* Return: value associated with the element, or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *curr = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	curr = ht->array[index];

	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}

	return (NULL);
}
