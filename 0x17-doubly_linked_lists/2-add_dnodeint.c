#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of list
 * @n: data to be inserted in the new node
 * Return: pointer to the new node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->next = NULL;
	temp->prev = NULL;
	temp->n = n;
	if ((*head) == NULL)
	{
		*head = temp;
		return (temp);
	}
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
	}
	return (temp);
}
