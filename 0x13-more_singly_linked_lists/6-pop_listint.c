#include "lists.h"
/**
 * pop_listint - removes head node
 * @head: pointer to pointer of head node
 * Return: data stored in head node that was removed
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int r;

	if (*head == NULL)
		return (0);

	temporary = *head;
	r = (*head)->n;
	*head = (*head)->next;

	free(temporary);

	return (r);
}
