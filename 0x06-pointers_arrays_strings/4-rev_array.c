#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int c, b;

	for (c = 0; c < n--; a++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
