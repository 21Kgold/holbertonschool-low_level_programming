#include "lists.h"
/**
 * add_dnodeint - returns the nth node of a dlistint_t linked list
 * @head: head of list
 * @index: node placement
 * Return: returns a pointer to the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head, *current;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i <= index ; i++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		current = temp;
		temp = temp->next;
	}
	return (current);
}
