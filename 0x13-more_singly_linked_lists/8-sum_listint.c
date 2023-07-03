#include "lists.h"
/**
 * sum_listint - computes sum of all integers
 * @head: pointer to head node
 * Return: sum of ints in the linked list
 */
int sum_listint(listint_t *head)
{
	int numcount = 0;

	while (head)
	{
		numcount += head->n;
		head = head->next;
	}

	return (numcount);
}
