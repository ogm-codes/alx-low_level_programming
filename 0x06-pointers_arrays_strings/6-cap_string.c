#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - capitalize words of string
 * @str: pointer
 * Return: returns capitalized chars
 */
char *cap_string(char *str)
{
	const char seperators = "\t\n,;.!?\"(){}";
	int length = strlen(str);

	if (len > 0 && islower(str[0]))
	{
		str[0] = toupper(str[0]);
	}

	for (int i = 1; i < len; i++)
	{
        // Capitalize first letter of each word
		if (islower(str[i]) && (strchr(delimiters, str[i - 1]) != NULL))
		{
			str[i] = toupper(str[i]);
		}
	}
	
	return (str);
}
