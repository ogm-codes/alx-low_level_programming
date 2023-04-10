#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - function
 * @haystack: pointer
 * @needle: pointer
 * Return: the same function from standard library
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
