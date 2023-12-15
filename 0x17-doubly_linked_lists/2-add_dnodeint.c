#include <stdio.h>
#include <stdlib.h>

#include "lists.h"



dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = malloc(sizeof(dlistint_t));

	if (new_head == NULL)
	{
		perror("malloc");
		return (NULL);
	}

	new_head->n = n;
	new_head->prev = NULL;
	new_head->next = (*head);

	if ((*head) != NULL)
	{
		(*head)->prev = new_head;
	}

	(*head) = new_head;

	return (new_head);
}
