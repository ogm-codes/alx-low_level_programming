#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: pointer to head node of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
