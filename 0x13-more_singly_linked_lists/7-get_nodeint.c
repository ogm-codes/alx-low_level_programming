#include "lists.h"

/**
 * get_nodeint_at_index - returns node at given index
 * @head: pointer to head node of list
 * @index: index of node to be retrieved
 * Return: pointer to node at specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
