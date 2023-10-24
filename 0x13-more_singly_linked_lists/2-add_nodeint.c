#include <stdlib.h>

#include "lists.h"


/**
 * add_nodeint - adds a newnode to the beginning of a
 * singly linked list
 * @head: head node pointer
 * @n: node member that stores an integer
 *
 * Return: address of newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
