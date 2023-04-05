#include "main.h"
/**
 * is_prime_number - determines if n is a prime number or not
 * @n: number to be determined if its a prime number or not
 * Return: 1 if n is prime otherwise 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
