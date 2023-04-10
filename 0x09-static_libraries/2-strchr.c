#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strchr - function
 * @s: input
 * @c: input
 * Return: standard library version
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
