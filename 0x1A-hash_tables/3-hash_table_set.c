#include "hash_tables.h"

/**
* hash_table_set - adds data to a hash table
* @ht: hash table to perform operation on
* @key: key of the data
* @value: value assigned to the key
* Return: 1 if successful, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *hash_node = NULL, *curr = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	curr = ht->array[index];

	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			return (1);
		}
		curr = curr->next;
	}

	hash_node = malloc(sizeof(hash_node_t));

	if (hash_node == NULL)
		return (0);

	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;

	return (1);
}
