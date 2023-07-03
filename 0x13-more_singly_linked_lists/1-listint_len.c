#include "lists.h"
#include <stdio.h>
/**
 * listint_len - 
 * @h:
 * Return:
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
