#include "lists.h"
#include "stdlib.h"

/**
 * free_list - frees memomry allocated to linked list
 * @head: pointer to head of linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
