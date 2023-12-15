#include <stdio.h>

#include "lists.h"



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
