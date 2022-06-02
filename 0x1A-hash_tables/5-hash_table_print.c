#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *node = NULL;

	if (ht == NULL || ht->size == 0)
	{
		return;
	}
	printf("{");
	if (ht != NULL || ht->size != 0)
	{
		for (i = 0 ; i < ht->size ; i++)
		{
			node = ht->array[i];
			for (; node != NULL ;)
			{
				if (j == 1)
				{
					printf(", ");
				}
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				j = 1;
			}
		}
	}
	printf("}\n");
}
