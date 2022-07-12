#include "main.h"

/**
 * puts_half- is a function that prints the half string
 * @str: is a varible
 */

void puts_half(char *str)
{
	int len;
	int i;

	len = strlen(str);
	i = len / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
