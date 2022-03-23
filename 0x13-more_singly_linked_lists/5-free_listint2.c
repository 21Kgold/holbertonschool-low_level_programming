#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to the first element of a single linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	new = *head;
	for ( ; new != NULL ;)
	{
		*head = new->next;
		free(new);
		new = *head;
	}
	head = NULL;
}
