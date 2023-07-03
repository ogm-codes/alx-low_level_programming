#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at specified index
 * @head: pointer to pointer of head node
 * @idx: index for new node insertion
 * @n: integer to store in new node
 * Return:
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int nodes;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (nodes = 0; nodes < (idx - 1); nodes++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
