#include <stdio.h>
#include <math.h>
/**
 * main - prints largest prime factor
 * Return: 0
 */
int main(void)
{
	long a, max;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			max = number / a;
		}
	}
	printf("%ld\n", max);
	return (0);
}
