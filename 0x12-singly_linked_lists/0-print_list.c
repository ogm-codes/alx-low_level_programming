#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of linked list
 * @h: pointer to head of linked list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		node++;
		h = h->next;
	}

	return (node);
}
