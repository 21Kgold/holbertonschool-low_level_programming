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
	unsigned int i;

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
	if ((*h) == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}
	for (i = 0 ; current->next != NULL ; i++)
	{
		if (i == idx)
		{
			new->next = current;
			new->prev = before;
			current->prev = new;
			if (idx == 0)
			{
				*h = new;
			}
			else
			{
				before->next = new;
			}
			return (new);
		}
		before = current;
		current = current->next;
	}
	return (NULL);
}
