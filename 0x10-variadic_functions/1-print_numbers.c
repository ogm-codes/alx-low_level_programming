#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @seperator: char to be printed
 * @n: integers in the arguments
 *
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count;

	va_start(list, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(list, int));

		if (count != (n - 1) && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}

	printf("\n");

	va_end(list);
}
