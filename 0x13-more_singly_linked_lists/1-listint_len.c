#include "lists.h"
#include <stdio.h>
/**
 * listint_len - number of elements in linked list
 * @h: pointer to head of list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
