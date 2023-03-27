#include "main.h"
/**
 * rev_string - prints string or word in reverse
 * @s: calculates each individual string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char placeHolder;
	int length = 0, counter = 0;

	while (s[counter++])
	{
		length++;
	}

	for (counter = length - 1; counter >= length / 2; counter--)
	{
		placeHolder = s[counter];
		s[counter] = s[length - counter - 1];
		s[length - counter - 1] = placeHolder;
	}
}
