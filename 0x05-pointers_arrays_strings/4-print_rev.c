#include "main.h"

/**
 * print_rev- is a function that print reverse string
 *@s: is a varible
 */

void print_rev(char *s)
{
	int p;
	int i;
	char r[63];

	p = 62;

	while (*str != '\0')
	{
		r[p] = *str;
		p--;
		str++;
	}
	i = 0;

	for (; i < 63; i++)
	{
		_putchar(r[i]);
	}
	_putchar('\n');
}
