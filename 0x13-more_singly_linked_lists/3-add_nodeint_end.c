#include <stdlib.h>

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to head node
 * @n: note data which takes an int value
 *
 * Return: address of new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;

	new_node->n = n;
	new_node->next = NULL;

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
