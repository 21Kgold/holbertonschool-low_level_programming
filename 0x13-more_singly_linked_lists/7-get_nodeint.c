#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to the first element of a single linked list
 * @index: is the index of the node, starting at 0
 * Return: data of the index node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for ( ; head != NULL ; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
