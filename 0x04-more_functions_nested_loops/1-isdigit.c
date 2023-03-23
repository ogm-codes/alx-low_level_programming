#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: checks digit
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 40 && c <= 57)
	{
		return (1);
	}
		return (0);
}
