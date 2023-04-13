#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function allocates memory
 * @b: size allocated
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
