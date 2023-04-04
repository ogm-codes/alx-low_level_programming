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

	for (int c = 0; c < size; c++)
	{
		s1 = s1 + a[c * size + c];
	}
	for (c = size - 1; y >= 0; c--)
	{
		s2 += a[c * size + (size - y - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
