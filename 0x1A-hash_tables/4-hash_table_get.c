#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * Return: value associated with element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (key == NULL || ht == NULL || ht->size == 0)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	return (ht->array[index]->value);
}
