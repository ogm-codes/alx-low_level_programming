#include "main.h"
/**
 * _strcmp - compares pointers to strings
 * @s1: first string compared
 * @s2: second string compared
 * Return: difference of unmatched strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
