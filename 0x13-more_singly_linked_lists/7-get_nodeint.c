#include <stdlib.h>

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 * a linked list
 * @head: points to the head node
 * @index: index of the node starting at 0
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}

	if (temp == NULL) /* node does not exist */
	{
		return (NULL);
	}
	return (temp);
}
