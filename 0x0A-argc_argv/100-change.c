#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins to make change
 * @argc: Arguments
 * @argv: Vector
 * Return:
 */
int main(int argc, char *argv[])
{
	int coin = 0;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	switch (cents) 
	{
		case 25:
			coin++;
			cents -= 25;
			break;
		case 10:
			coin++;
			cents -= 10;
			break;
		case 5:
			coin++;
			cents -= 5;
			break;
		case 1:
			coin++;
			cents -= 1;
			break;
		default:
			printf("Error\n");
			return (1);
	}

	printf("%d\n", coin);

	return (0);
}
