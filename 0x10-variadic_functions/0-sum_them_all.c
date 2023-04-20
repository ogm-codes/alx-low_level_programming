#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums up all values in the parameters
 * @n: number of values to add up
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int count;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
