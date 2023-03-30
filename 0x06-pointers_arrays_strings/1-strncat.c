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
	int index = 0;
	int dest_len = 0;

	while (dest[index] != '\0')
	{
		index++;
	}

	while (dest_len < n && src[dest_len] != '\0')
	{
		dest[index] = src[dest_len];
		index++;
		dest_len++;
	}
	dest[index] = '\0';
	return (dest);
}
