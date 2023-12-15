#include <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: address of head node
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t node_count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node_count++;
	}

	return (node_count);
}
