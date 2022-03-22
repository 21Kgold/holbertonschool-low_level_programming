#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * containing the duplicated str
 * @head: pointer to the pointer pointing the first element of
 * the first node of a single linked list
 * @str: pointer to an element of the struct defined as list_t
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t n = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	for ( ; str[n] != '\0' ; n++)
	{
	}
	new->len = n;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		for ( ; temp->next != NULL ;)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
