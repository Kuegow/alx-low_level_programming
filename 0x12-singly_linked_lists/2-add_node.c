#include <stdlib.h>
#include <string.h>

#include "lists.h"

/**
 * add_node - adds a new at the beginning of a list
 * @head: the head node
 * @str: string element in the list
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
