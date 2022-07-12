#include "main.h"

/**
 * _strcpy- is
 * @dest: varable
 * @src: varibale
 * Return: this is the copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
