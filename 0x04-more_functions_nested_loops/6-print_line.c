#include "main.h"

/**
 * print_line - draw straight line
 * @n: length of line
 * Return: empty
 */
void print_line(int n)
{
	int a;

	if (a <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
