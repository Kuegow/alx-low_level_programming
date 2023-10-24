#include <stdlib.h>
#include <stdio.h>

#include "lists.h"

/**
 * print_listint - prints elements of a singly linked list
 * @h: - head node address
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		printf("%u\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
