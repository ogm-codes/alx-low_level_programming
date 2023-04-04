#include "main.h"
#include <stdio.h>
/**
 * print_diagram - prints sum of two diagonals of a square
 * @a: pointer
 * @size: size of square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int s1, s2;
	
	s1 = 0;
	s2 = 0;

	for (int c = 0; c <= (size * size); c = c + size + 1)
	{
		s1 = s1 + a[c];
	}
	for (int n = size - 1; n <= (size * size) - size; n = n + size - 1)
	{
		s2 = s2 + a[n];
	}
	printf("%d, %d\n", s1, s2);
}
