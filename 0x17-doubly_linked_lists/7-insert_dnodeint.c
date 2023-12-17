#include <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node to a dlistint_t linked list
 * @h: address of head node
 * @idx: index at which new node is added. Starts from 0
 * @n: data of new node
 *
 * Return: new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int count = 0;

	if (newnode == NULL)
		return (NULL);

	if (*h == NULL)
	{
		free(newnode);
		return (NULL);
	}

	while (temp->next != NULL && count != idx)
	{
		temp = temp->next;
		count++;
	}

	if (temp->next == NULL && idx > count)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->next = temp->next;
	newnode->prev = temp;
	temp->next = newnode;

	return (newnode);
}
