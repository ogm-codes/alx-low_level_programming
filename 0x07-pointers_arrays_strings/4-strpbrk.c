#include "main.h"
/**
 * _strpbrk - searches string for set of bytes
 * @s: first string args
 * @accept: second string arg
 * Return: Null
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
