#include  <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
 * list_len - returns number of elements in a
 * singly linked list
 * @h: points to the head node
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
