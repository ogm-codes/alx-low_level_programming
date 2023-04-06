#include "main.h"
/**
 * is_prime_number - determines if n is a prime number or not
 * @n: number to be determined if its a prime number or not
 * Return: 1 if n is prime otherwise 0
 */
int is_prime_number(int n)
{
	return (check(n, 1));
}
/**
 * check - determine if x is prime
 * @x: number to be checked
 * @y: the mod% number
 * Return: 1 if prime otherwise 0
 */
int check(int x, int y)
{
	if (x <= 1)
	{
		return (0);
	}

	if (x % y == 0 && y > 1)
	{
		return (0);
	}

	if ((x / y) < y)
	{
		return (1);
	}

	return (check(x, y + 1));
}
