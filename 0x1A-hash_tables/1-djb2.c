#include "hash_tables.h"

/**
* hash_djb2 - implementation of the djb2 algorithm
* @str: str to be hashed
* Return: hashed value
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh = 5381;
	int c;

	while ((c = *str++))
		hsh = ((hsh << 5) + hsh) + c;
		/* hsh * 33 + c */

	return (hsh);
}
