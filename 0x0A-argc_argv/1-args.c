#include "main.h"
#include <stdio.h>
/**
 * main - prints number of args
 * @argc: counts arguments
 * @argv: pointer array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
