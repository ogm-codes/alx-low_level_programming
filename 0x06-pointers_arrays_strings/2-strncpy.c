#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: buffer stores string copy
 * @src: source string
 * @n: bytes copies from src
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_length = 0
	int index = 0;

	while (src[index++])
	{
		src_length++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = src_length; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
