#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a double linked list
 * @head: head of list
 * Return: returns the result of the sum of all the n data
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
