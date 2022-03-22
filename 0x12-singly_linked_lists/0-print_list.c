#include "lists.h"
/**
 * print_list - Prints the elements of a single linked list
 * @h: pointer to the first element of a single linked list
 * Return: size_t type
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	for ( ; h != NULL ; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
