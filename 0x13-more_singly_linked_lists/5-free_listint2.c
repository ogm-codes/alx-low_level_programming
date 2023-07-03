#include "lists.h"

/**
 * free_listint2 - frees linked list of integers
 * @head: pointer to the pointer of head node of linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
		return;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}

	head = NULL;
}
