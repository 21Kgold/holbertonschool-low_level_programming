#include "hash_tables.h"

/**
 * key_index - hash function is an algorithm that produces an index of where a
 * value can be found or stored in the hash table.
 * @size: number of elements of the array
 * @key: unique data that identifies an array element
 * Return: key (hash) index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*
	* In hash tables values are not stored in a sorted order
	* Given a key, the hash function can suggest an index where the value can
	* be found or stored:
	* index = f(key, array_size)
	*
	* This is often done in two steps:
	* hash = hashfunc(key)
	* index = hash % array_size
	*
	* Using this method, hash is independent of the size of the hash table.
	* hash is reduced to an index using the modulo (%) operator.
	*/
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
