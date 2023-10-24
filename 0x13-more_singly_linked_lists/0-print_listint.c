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
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
