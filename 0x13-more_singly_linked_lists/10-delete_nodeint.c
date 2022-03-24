#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index position
 * @head: pointer to the first element of a single linked list
 * @index: position at the node that will be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *holder;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	for ( ; temp != NULL ; i++)
	{
		if (i == index - 1)
		{
			holder = temp->next;
			temp->next = holder->next;
			free(holder);
		}
		temp = temp->next;
	}
	if (i <= index)
	{
		return (1);
	}
	return (-1);
}
