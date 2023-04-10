#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - fills block of memory
 * @s: address of memory
 * @b: desired value
 * @n: number of bytes
 *
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
