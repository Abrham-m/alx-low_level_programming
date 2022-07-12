#include "main.h"

/**
 * _puts- is a function that prints
 * @str: is apointer that points to string
 */

void _puts(char *str)
{
	int i;
	for (i = 0;str[i]!='\0';i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');

}
