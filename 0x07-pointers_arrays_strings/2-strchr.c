#include "main.h"
/**
 * _strchr - locates character in a string
 * @c: identifies character
 * @s: string
 * Return: Null
 */
char *_strchr(char *s, char c)
{
	int a;

	for (int a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}

	return (NULL);
}
