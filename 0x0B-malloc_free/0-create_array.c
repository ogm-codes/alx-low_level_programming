#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array chars, initializes with specific char
 * @size: size of array
 * @c: char to be displayed
 * Return: Null if size is null
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
