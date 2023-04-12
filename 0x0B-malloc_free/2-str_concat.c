#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: s1 + s2 joined
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int a = 0, b = 0, c = 0, d = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	while (s1[a] && s2[b])
	{
		a++;
		b++;
	}

	d = a + b;
	s = malloc((sizeof(char) * d) + 1);

	if (s == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= a)
			s[c] = s1[c];

		if (c >= a)
		{
			s[c] = s2[c];
			b++;
		}
		c++;
	}
	s[c] = '\0';
	return (s);
}
