#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the KEY, cannot be an empty string
 * @value: value associated with key, must be duplicated, cannot be empty str
 * Return: 1 if succ 0 otherwise
 * "In case of collision, add the new node at the beginning of the list"
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hashnode;
	unsigned long int _key, index, i;

	if (!(ht) || !(key) || !(value) || (!(key[0])))
	{
		return (0);
	}
	hashnode = malloc(sizeof(hash_node_t));
	if (!(hashnode))
	{
		return (0);
	}
	_key = hash_djb2((const unsigned char *)key);
	index = _key % ht->size;

	for (i = index; ht->array[i]; i++)
	{
		if (!(strcmp(key, ht->array[i]->key)))
		{
			free(hashnode);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	hashnode->key = strdup(key);
	hashnode->value = strdup(value);
	hashnode->next = ht->array[index];
	ht->array[index] = hashnode;
	return (1);
}
