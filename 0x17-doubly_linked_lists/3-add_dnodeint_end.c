#include <stdio.h>
#include <stdlib.h>

#include "lists.h"



dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (newnode == NULL)
	{
		perror("malloc");
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	newnode->prev = temp;
	temp->next = newnode;

	return (newnode);
}
