#include <stdio.h>
/**
 * main - prints first 50 numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	unsigned long fib1, fib2, sum;

	fib1 = 0;
	fib2 = 1;

	for (num = 0; num < 50; num++)
	{
		sum = fib1 +fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;

		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
