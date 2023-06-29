#include <string.h>
#include "list.h"

/**
 * add_node_end - adds new node at end of linked list
 * @head: pointer to head of linked list
 * @str: string stored in new node
 * Return: updated head of linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	char *duplicate;
	int length;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
	{
		length++;
	}

	new->str = duplicate;
	new->length = length;
	new->next = *head;

	if ()
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (*head);
}
