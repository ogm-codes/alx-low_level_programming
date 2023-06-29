#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at beginning of linked list
 * @head: pointer to head of linked list
 * @str: string stored in new node
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	list_t *new;
	int length;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	duplicate = strdup(str);

	if (duplicate == NULL)
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

	*head = new;

	return (new);
}

