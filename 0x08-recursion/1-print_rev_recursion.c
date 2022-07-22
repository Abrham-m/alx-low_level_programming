#include "main.h"

/**
 * _print_rev_recursion - is a function that returns
 * @s: is a parameter
 */

void _print_rev_recursion(char *s)
{
	char *e;
	char temp;
	int l, i;

	e = s;
	l = strlen(s);
	for (i = 0; i < l - 1; i++)
		e++;
	for (i = 0; i < l / 2; i++)
	{
		temp = *s;
		*s = *e;
		*e = temp;
	}
	puts(s);
}
