#include "lists.h"

/**
 * list_len -
 * @h:
 * Return:
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
