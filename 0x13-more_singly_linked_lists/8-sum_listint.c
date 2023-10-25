#include <stdlib.h>

#include "lists.h"

/**
 * sum_listint - adds all the data of a listint_t linked list
 * @head: pointer to head node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
