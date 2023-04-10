#include "main.h"
#include <stdio.h>
/**
 * main - pritns all argument recieved
 * @argc: counts the arguments
 * @argv: pointer array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	for (int a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
