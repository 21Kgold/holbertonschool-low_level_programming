#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the nth node of a dlistint_t linked list
 * @head: head of list
 * @index: node placement
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *current = NULL, *before = NULL;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0 ; i <= index ; i++)
	{
		if (temp == NULL)
		{
			return (-1);
		}
		before = current;
		current = temp;
		temp = temp->next;
	}
	before->next = temp;
	if (temp != NULL)
	{
		temp->prev = before;
	}
	free(current);
	return (1);
}
