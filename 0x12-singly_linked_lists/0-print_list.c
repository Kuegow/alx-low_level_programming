#include  <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
 * print_list - prints elenents of a singly linked list
 * @h: points to the head node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}
