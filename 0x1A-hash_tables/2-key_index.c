#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: key is key
 * @size: size of array of hash table
 * Return: index at which the key/value pair should be stored in hashtable
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value, _key;

	_key = hash_djb2(key);
	value = _key % size;

	return (value);
}
