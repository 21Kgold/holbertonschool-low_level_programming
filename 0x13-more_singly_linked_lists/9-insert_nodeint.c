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
	listint_t *new, *temp, *holder;

	temp = *head;
	holder = *head;
	for ( ; temp != NULL && head != NULL ; i++)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		if (idx == 0)
		{
			new->next = temp;
			*head = new;
		}
		else if (i == idx - 1)
		{
			holder = temp->next;
			temp->next = new;
			new->next = holder;
		}
		temp = temp->next;
	}
	if (i <= idx)
	{
		return (new);
	}
	return (NULL);
}
