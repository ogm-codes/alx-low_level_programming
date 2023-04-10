#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: standard library version
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
