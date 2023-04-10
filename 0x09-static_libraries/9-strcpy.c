#include "main.h"
/**
 * _strcpy - copies pointed string
 * @dest: destination value
 * @src: source value
 *
 * Return: @dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	dest[z++] = '\0';
	return (dest);
}
