#include "lists.h"

/**
 * print_dlistint - print each element of a double linked list
 * @h: pointer to the first node of a double linked list
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;
	size_t len = 0;

	for (i = 0; h != NULL ; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
