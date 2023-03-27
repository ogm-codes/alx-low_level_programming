#include "main.h"
/**
 * _strlen - returns length of string
 * @s: counts characters
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}

	return (length);
}
