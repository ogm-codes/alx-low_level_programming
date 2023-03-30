#include "main.h"
/**
 * _strcat - joins two strings
 * @dest: destination value
 * @src: source value
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int z;
	int length = 0;

	while (dest[length])
	{
		length++;
	}

	for (z = 0; src[z] != 0; z++)
	{
		dest[length] = src[z];
		length++;
	}

	dest[length] = '\0';
	return (dest);
}
