#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strpbrk - function
 * @s: input
 * @accept: pointer
 * Return: Standard library version
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
