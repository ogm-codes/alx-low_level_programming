#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s:
 * @accept:
 * Return:
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int count, checker;

	count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		checker = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				count++;
				checker = 1;
			}
		}
	}

	return (0);
}
