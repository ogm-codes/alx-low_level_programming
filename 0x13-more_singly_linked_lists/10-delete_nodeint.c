#include "lists.h"

/**
 * delete_nodeint_at_index - deletse node
 * @head: pointer to pointer of  head node
 * @index: index of node to be deleted
 * Return: 1 if delete succeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	temporary = copy->next;
	copy->next = temporary->next;
	free(temporary);

	return (1);
}
