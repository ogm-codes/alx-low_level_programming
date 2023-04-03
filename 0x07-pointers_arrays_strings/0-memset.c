#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @n: represents bytes of memory
 * @s: pointer
 * @b: constant byte
 * Return: @s
 */
char *_memset(char *s, char b, unnsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (a);
}
