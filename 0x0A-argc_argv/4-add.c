#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: counts the numbers
 * @argv: points to the numbers
 * Return: 0
 */
int main(int agrc, char *argv[])
{
	int total = 0;

	for (int i = 1; i < argc; i++)
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
			j++
		}

		if (num >= 0)
		{
			total += num;
		}
	}
	printf("%d\n", total);

	return (0);
}
