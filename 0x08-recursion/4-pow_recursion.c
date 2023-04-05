#include "main.h"
/**
 * _pow_recursion - raises value of x to power of y
 * @x: value to be raised by power of y
 * @y: raises value of x to y
 * Return: -1 if y is < 0 else value of x raised
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
