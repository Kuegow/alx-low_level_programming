#include <stdlib.h>

#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: pointer to head node
 * @idx: index where node should be added. counts from 0
 * @n: data value of node which holds an int
 *
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	if (*head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	while (idx > 1 && temp->next != NULL)
	{
		temp = temp->next;
		idx--;
	}

	if (temp->next == NULL) /* node insertion not possible */
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
