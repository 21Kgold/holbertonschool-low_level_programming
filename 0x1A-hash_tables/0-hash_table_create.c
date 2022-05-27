#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: array size
 * Return: pointer to the newly created hash table or NULL
 * if malloc memory allocation fails
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	/*
	* Pointer to array with size elements, each array element points to a
	* node, each node containing a key, a value and a next pointer
	*/
	hash_table_t *table = NULL;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->array = malloc(sizeof(void *) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}
	table->size = size;
	for (i = 0 ; i < table->size ; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
