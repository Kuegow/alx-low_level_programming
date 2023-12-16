#include <stdio.h>

#include "lists.h"

/**
 * sum_dlistint - sums all teh data (n) of a dlistint_t list
 * @head: address of head
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
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
