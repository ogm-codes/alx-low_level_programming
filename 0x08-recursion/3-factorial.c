#include "main.h"
/**
 * factorial - gives out a factorial of a number
 * @n: number that is to be factorised
 * Return: -1 if n < 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (0);
	}

	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
}
