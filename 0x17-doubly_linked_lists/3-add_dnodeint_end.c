#include "lists.h"
/**
 * add_dnodeint - adds a new node at the end of a dlistint_t list
 * @head: head of list
 * @n: data to be inserted in the new node
 * Return: pointer to the new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *current = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->next = NULL;
	temp->n = n;
	temp->prev = NULL;
	current = *head;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	else
	{
		for ( ; current->next != NULL ;)
		{
			current = current->next;
		}
		temp->prev = current;
		current->next = temp;
	}
	return (temp);
}
