#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: pointer
 * Return: returns a number which is length of s
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
