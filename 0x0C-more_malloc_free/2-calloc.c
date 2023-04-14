#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: element of array
 * @size: bytes
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0; int c = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	c = nmemb * size;
	arr = malloc(c);

	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < c)
	{
		arr[i] = 0;
		i++;
	}

	return (arr);
}
