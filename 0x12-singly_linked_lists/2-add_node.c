#include <string.h>
#include "lists.h"

/**
 * add_node -
 * @head:
 * @str
 * Return:
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

