#include <stdio.h>

#include "lists.h"


/**
 * get_dnodeint_at_index - get nth node of a dlistint_t linked list
 * @head: address of head node
 * @index: index of nth node, starting from 0
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	while (node->next != NULL && count != index)
	{
		node = node->next;
		count++;
	}

	if (node->next == NULL && index > count)
	{
		return (NULL);  /* no node at index */
	}

	return (node);
}
