#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the pointer pointing the first element of
 * the first node of a single linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *new = head;

	for ( ; new != NULL ;)
	{
		free(new->str);
		free(new);
		head = head->next;
		new = head;
	}
}
