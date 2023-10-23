#include <stdlib.h>
#include <string.h>

#include "lists.h"

/**
 * add_node_end - adds a new node to end of the list
 * @head: reference to the head node
 * @str: string element
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (new_node == NULL)
		return (NULL);

	(*new_node).str = strdup(str);
	(*new_node).len = strlen(str);
	(*new_node).next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while ((*temp).next != NULL)
		{
			temp = (*temp).next;
		}
		(*temp).next = new_node;
	}
	return (new_node);
}
