#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area pointed to by src
 * @src: memory area
 * @n: bytes to copied from src
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
