#include "lists.h"

/**
 * add_nodeint - adds new node at the start of a linked list
 * @head: pointer to pointer to head of list
 * @n: value to be stored in new node
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
