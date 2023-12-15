#include <stdio.h>

#include "lists.h"


/**
 * dlistint_len - print number of elements in a linked list
 * @h: address of head node
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t element_count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		element_count++;
	}

	return (element_count);
}
