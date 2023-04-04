#include "main.h"
/**
 * _strstr - locates a substing
 * @needle: second argument
 * @haystack: first argument
 * Return: 
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *scnd = needle;

		while (*first == *scnd && *scnd != '\0')
		{
			first++;
			scnd++;
		}

		if (*scnd == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
