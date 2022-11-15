#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: void
 * If ht if NULL don't print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *mrclean, *forklift;

	if (!(ht))
	{
		return;
	}
	else if (!(ht->array) || ht->size <= 0)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		forklift = ht->array[i];
		while (forklift)
		{
			mrclean = forklift->next;
			if (forklift->value)
				free(forklift->value);
			free(forklift->key);
			free(forklift);
			forklift = mrclean;
		}
	}
	free(ht->array);
	free(ht);
}
