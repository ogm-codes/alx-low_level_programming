#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
/**
 * _strspn - function
 * @s: input
 * @accept: input
 * Return: standard library version
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
