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
	char *string;
	const char args[] = "cifs";
	unsigned int a = 0, b, c = 0;

	va_start(list, format);
	while (format && format[a])
	{
		b = 0;
		while (args[b])
		{
			if (format[a] == args[b] && c)
			{
				printf(", ");
				break;
			}
			b++;
		}
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(list, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), c = 1;
				break;
			case 's':
				string = va_arg(list, char *);
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		} a++;
	} printf("\n");
}
