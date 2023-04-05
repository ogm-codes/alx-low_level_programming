#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer used to write string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar("\n");
	}

	_putchar(*s);
	_putchar("\n");
}
