#include "main.h"

/**
 * string_toupper - is a function
 * @str: is a string
 * Return: char
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]);
	}
	return (str);
}
