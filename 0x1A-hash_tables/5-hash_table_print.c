#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;

	if (ht == NULL || ht->size == 0)
	{
		return;
	}
	printf("{");
	if (ht != NULL || ht->size != 0)
	{
		for (i = 0 ; i < ht->size ; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (j == 1)
				{
					printf(", ");
				}
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				j = 1;
			}
		}
	}
	printf("}\n");
}
