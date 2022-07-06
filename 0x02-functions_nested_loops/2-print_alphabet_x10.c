#include "main.h"

/**
 * print_alphabet_x10 - it prints an alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char c;
	int a;

	a = 1;

	while (a <= 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		a++;
	}
}
