#include "main.h"
/**
 * _puts - similar to puts function
 * @str: every character to be outputted
 *
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
