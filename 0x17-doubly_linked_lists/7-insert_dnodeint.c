#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: head of list
 * @idx: node position, that starts at 0.
 * @n: data of the inserted node
 * Return: returns a pointer to the idx node of a dlistint_t linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *current = *h, *before = NULL;
	unsigned int i = 0;

	if (*h == NULL && idx != 0)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	new->n = n;
	new->prev = NULL;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 0 ; current != NULL ; i++)
	{
		if (i == idx)
		{
			new->next = current;
			new->prev = before;
			before->next = new;
			current->prev = new;
			return (new);
		} 
		before = current;
		current = current->next;
	}
	if (i == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
