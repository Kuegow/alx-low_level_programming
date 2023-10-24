#include <stdlib.h>

#include "lists.h"

/**
 * listint_len - returns the number of elemets in a
 * linked list
 * @h: pointer to head node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
