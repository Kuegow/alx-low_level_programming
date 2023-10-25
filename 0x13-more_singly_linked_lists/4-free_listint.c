#include <stdlib.h>

#include "lists.h"

/**
 * free_listint - frees a linked list listint_t
 * @head: pointer to head node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}
