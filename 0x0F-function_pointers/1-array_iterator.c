#include "function_pointers.h"
/**
 * array_iterator - executes function given as parameter
 * @array: pointer
 * @size: size of array
 * @action: pointer to function used
 *
 * Return : Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
