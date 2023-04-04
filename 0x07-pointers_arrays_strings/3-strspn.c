#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string input argument
 * @accept: string input argument
 * Return: null or a
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	a = 0;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
			{
				return (a);
			}
		}
		s++;
	}
	return (a);
}
