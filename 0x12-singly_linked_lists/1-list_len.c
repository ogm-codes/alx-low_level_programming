#include "lists.h"

/**
 * list_len - computes number of elements in linked list
 * @h: pointer to head of linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t list = 0;

	while (h)
	{
		list++;
		h = h->next;
	}

	return (list);
}
