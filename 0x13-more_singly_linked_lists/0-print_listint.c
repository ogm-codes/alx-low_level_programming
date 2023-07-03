#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node = node + 1;
		printf("%d/n", h->n);
		h = h->next;
	}

	return (node);
}
