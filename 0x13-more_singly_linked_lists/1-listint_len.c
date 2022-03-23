#include "lists.h"
/**
 * listint_len - count the number of nodes
 * @h: pointer to the first element of a single linked list
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for ( ; h != NULL ; i++)
	{
		h = h->next;
	}
	return (i);
}
