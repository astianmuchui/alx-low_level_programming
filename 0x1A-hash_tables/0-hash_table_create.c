#include "hash_tables.h"

/**
* hash_table_create - A function to create a hash table
* @size: size
* Return: pointer to the hash table created or null
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	hash_t = malloc(sizeof(hash_table_t));

	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;

	return (hash_t);
}
