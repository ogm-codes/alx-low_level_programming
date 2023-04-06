#include "main.h"
#include <stdio.h>
/**
 * sqr - does a math formula to square a number
 * @x: calculates square
 * @y: an interation integer
 * Return: -1 if no square root is found
 */
int sqr(int x, int y)
{
	int sqrt = y * y;

	if (sqrt > x)
	{
		return (-1);
	}

	if (sqrt == x)
	{
		return (y);
	}

	return (sqr(x, y + 1));
}
/**
 * _sqrt_recursion - returns natural square root of number
 * @n: integer value to be squared
 * Return: -1 if square root not found
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

