#include "lists.h"
/**
 * dlistint_len - length of linked list
 * @h: head of list
 * Return: size_t length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length;

	for (length = 0 ; h != NULL ; length++)
	{
		h = h->next;
	}
	return (length);
}
