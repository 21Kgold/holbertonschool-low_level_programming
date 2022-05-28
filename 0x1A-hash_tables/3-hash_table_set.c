#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table. In case of
 * collision, add the new node at the beginning of the list
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head = NULL;

	if (ht == NULL || key == NULL || ht->size == 0)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	head = malloc(sizeof(hash_node_t));
	if (head == NULL)
	{
		return (0);
	}
	head->key = (char *)key;
	head->value = strdup(value);
	head->next = ht->array[index];
	ht->array[index] = head;
	return (1);
}
