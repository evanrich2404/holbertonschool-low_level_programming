#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/* allocate memory for the hash table */
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	/* allocate memory for the array */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	/* initialize the array */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	/* set the size of the array */
	ht->size = size;

	return (ht);
}
