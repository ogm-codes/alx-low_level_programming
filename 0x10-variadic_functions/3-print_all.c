#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - only prints strings in the parameters
 * @format: format like int or char
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	const char *string;

	va_start(list, format);

	string = format;
	while (*string)
	{
		if (*string == 'c')
			printf("%c", va_arg(list, int));
		else if (*string == 'i')
		{
			printf("%d", va_arg(list, int));
		}
		else if (*string == 'f')
		{
			printf("%f", va_arg(list, double));
		}
		else if (*string == 's')
		{
			printf("%s", va_arg(list, char *));
		}
		string++;

			if (*string && (*string == 'c' ||
					*string == 'i' ||
					*string == 'f' ||
					*string == 's'))
					printf(", ");
	}
	printf("\n");
	va_end(list);
}
