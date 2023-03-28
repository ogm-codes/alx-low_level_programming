#include "main.h"
/**
 * print_array - prints an array
 * @a: pointer
 * @n: elements to  be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);
		if ( z != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
