#include <stdio.h>

/**
 * print_name - is afunction that print name
 * @name: character
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	else
		f(name);
}
