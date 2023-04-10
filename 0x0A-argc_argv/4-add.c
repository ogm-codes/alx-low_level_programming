#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: counts the numbers
 * @argv: points to the numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int total = 0;
	int i = 0;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int num = 0;
		int j = 0;

		while (arg[j] != '\0')
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (arg[j] - '0');
			j++;
		}

		if (num >= 0)
		{
			total += num;
		}
	}
	printf("%d\n", total);

	return (0);
}
