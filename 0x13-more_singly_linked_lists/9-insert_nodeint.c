#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first element of a single linked list
 * @idx: position at the new node will be inserted
 * @n: data of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *temp;

	temp = *head;
	if (*head != NULL || head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
		}
		for ( ; temp != NULL ; i++)
		{
			if (i == idx - 1)
			{
				new->next = temp->next;
				temp->next = new;
			}
			temp = temp->next;
		}
	}
	if (i <= idx)
	{
		return (new);
	}
	return (NULL);
}
