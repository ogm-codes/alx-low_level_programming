#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: uses n bytes from source
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = dest_len = 0;

	while (dest[indx++])
	{
		dest_len++;
		for (index = 0; src[index] && index < n; index++)
		{
			dest[dest_len++] = src[index];
		}
	}
	return (dest);
}
