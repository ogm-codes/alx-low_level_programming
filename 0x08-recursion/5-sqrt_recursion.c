#include "main.h"
/**
 * _sqrt_recursion - returns square root of n
 * @n: number that has to be square rooted
 * Return: -1 if no square root is not found
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
/**
 * sqr - does a math formula to square a number
 * @x: calculates square
 * @y: an interation integr
 * Return: square root of number
 */
int sqr(int x, int y)
{
	int sqrt = x * x;

	if (sqrt > y)
	{
		return (-1);
	}

	if (sqrt == y)
	{
		return (y);
	}

	return (sqr(x, y + 1));
}
