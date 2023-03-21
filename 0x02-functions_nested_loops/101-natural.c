#include <stdio.h>
/**
 * main - shows all natural numbers below 1024
 *
 * Return: is 0
 */
int main(void)
{
	int a, count = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			count += a;
		}
	}

	printf("%d\n", count);

	return (0);
}
