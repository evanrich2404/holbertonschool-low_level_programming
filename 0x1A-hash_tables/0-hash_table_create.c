#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: determines size of array/hash table
 * Return: a pointer to newly created hash table; or NULL for failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hashtable = malloc(sizeof(hash_table_t));

	if (!(hashtable))
	{
		return (NULL);
	}

	hashtable->array = malloc(sizeof(hash_node_t *) * size);

	if (!(hashtable->array))
	{
		free(hashtable);
		return (NULL);
	}

	hashtable->size = size;
	for (i = 0; i < size; i++)
	{
		hashtable->array[i] = NULL;
	}
	return (hashtable);
}
