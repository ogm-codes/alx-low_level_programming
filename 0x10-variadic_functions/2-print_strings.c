#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - only prints strings in the parameters
 * @seperator: char that seperates strings
 * @n: number of arguments
 *
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *pointer;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		pointer = va_arg(list, char *);

		if (pointer)
		{
			printf("%s", pointer);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n -1)
		{
			if (seperator)
			{
				printf("%s", seperator);
			}
		}
	}

	printf("\n");
	va_end(list);
}
