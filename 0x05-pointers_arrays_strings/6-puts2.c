#include "main.h"
/**
 * puts2 - prints ohere character of string
 * @str: input
 *
 * Return: void
 */
void puts2(char *str)
{
	int c; 
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (c = 0; c < a; c += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}	
