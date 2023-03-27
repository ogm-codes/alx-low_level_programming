#include "main.h"
/**
 * swap_int - switches values of two integers
 * @a: swap to b
 * @b: swap to a
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
