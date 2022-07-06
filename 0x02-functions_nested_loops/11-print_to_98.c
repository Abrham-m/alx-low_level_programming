#include "main.h"

/**
 * print_to_98 - is a function that prints whole numbers
 * @n: is a variable
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
			_putchar(n);
		else
		{
			_putchar(n);
			_putchar(',');
		}
	}
}
