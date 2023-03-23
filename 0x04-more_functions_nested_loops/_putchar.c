#include <unistd.h>

/**
 * _putchar - writes to stdout
 * @c: character to print
 *
 * Return: on succes 1, failure -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
