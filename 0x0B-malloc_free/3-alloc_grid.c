#include "main.h"
#include <atdlib.h>
/**
 * alloc_grid - returns pointer to 2D array
 * @width: width of array
 * @height: height of array
 * Return: Null on failure
 */
int **alloc_grid(int width, int height)
{
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(int *) * height);
}
