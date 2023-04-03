#include "main.h"
/**
 * _strpbrk - searches string for set of bytes
 * @s: first string argument
 * @accept: second string argument
 * return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[n])
			{
				return (s + a);
			}
		}
	}

	return (NULL);
}
