#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return pointer to new string
 * @str: duplicate pointer
 * Return: Null
 */
char *_strdup(char *str)
{
	char *a;
	int i = 1;
	int s = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	a = malloc((sizeof(char) * i) + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	while (s < i)
	{
		a[s] = str[s];
		s++;
	}

	a[s] = '\0';
	return (a);
}
