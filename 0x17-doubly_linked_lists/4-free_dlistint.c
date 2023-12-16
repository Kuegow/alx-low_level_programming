#include <stdio.h>
#include <stdlib.h>

#include "lists.h"


/**
 * free_dlistint - frees a linked list
 * @head: address of head node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}
