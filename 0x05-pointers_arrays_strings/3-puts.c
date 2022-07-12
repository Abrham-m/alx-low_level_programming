#include "main.h"

/**
 * _puts- is a function that prints
 * @str: is apointer that points to string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}
	putchar('\n');

}
