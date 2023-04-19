#include "function_pointers.h"
/**
 * int_index - searches for integers
 * @array: points to array
 * @size: size of arrays
 * @cmp: pointer
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[a]))
				{
					return (a);
				}
				a++;
			}
		}
	}

	return (-1);
}
