#include "main.h"
/**
 * print_chesboard - prints a chessboard
 * @a: pointer array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	for (int b = 0; b < 8; b++)
	{
		for (int c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
