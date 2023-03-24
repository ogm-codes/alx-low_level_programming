#include "main.h"
/**
 * _isdigit - checks if character is a digit
 * @c: checks digit
 *
 * Return: 1 for character or  0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 40 && c <= 57)
	{
		return (1);
	}
	return (0);
}
