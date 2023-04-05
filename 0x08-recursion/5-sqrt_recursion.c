#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns square root of n
 * sqr - does a math formula to square a number
 * @n: number that has to be square rooted
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

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

