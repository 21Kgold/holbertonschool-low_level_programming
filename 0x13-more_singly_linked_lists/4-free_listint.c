#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first element of a single linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *new = head;


	for ( ; new != NULL ;)
	{
		free(new);
		head = new->next;
		new = head;
	}
	if (new == NULL)
		free(new);
}
