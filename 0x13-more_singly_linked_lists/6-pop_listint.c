#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to the first element of a single linked list
 * Return: returns the head node’s data (n) or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	new = *head;
	*head = (*head)->next;
	free(new);
	new = NULL;
	return (data);
}
