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
	int index = 0;

	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
