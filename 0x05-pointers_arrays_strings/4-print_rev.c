#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: for every character in the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[c] != '\0')
	{
		a++;
	}

	for (a -= 1; a >= 0; a--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
