#include "hash_tables.h"

/**
* key_index - returns the index of a key
* @key: key whose index to retreive
* @size: size
* Return: index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;

	return (index);
}
