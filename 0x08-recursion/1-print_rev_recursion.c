#include "main.h"

/**
 * _print_rev_recursion - is a function that returns
 * @s: is a parameter
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
