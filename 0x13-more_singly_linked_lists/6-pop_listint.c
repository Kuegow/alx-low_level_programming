#include <stdlib.h>

#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to head node of a linked list
 *
 * Return: head node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;

	data = temp->n;
	free(temp);

	return (data);
}
