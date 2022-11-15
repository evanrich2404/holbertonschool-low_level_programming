#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: value associated with the element, or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int _key, index, i;

	if (!(ht) || !(key) || (!(key[0])))
	{
		return (NULL);
	}
	_key = hash_djb2((const unsigned char *)key);
	index = _key % ht->size;

	for (i = index; ht->array[i]; i++)
	{
		while (ht->array[i])
		{
			if (!(strcmp(key, ht->array[i]->key)))
			{
				return (ht->array[i]->value);
			}
			ht->array[i] = ht->array[i]->next;
		}
	}
	return (NULL);
}
