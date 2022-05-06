#include "lists.h"
/**
 * add_dnodeint - returns the sum of all the data (n) of a double linked list
 * @head: head of list
 * Return: returns a pointer to the nth node of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int i = 0, j = 0;

	if (head == NULL)
	{
		return (i);
	}
	for ( ; temp != NULL ; )
	{
		j = temp->n;
		i += j;
		temp = temp->next;
	}
	return (i);
}
