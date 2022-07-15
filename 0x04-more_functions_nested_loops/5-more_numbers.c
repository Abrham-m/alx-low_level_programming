#include "main.h"

/**
 * more_numbers - Entry point
 * Return: no return
 */
void more_numbers(void)
{
	int i, k, f, l;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			f = k / 10;
			l = k % 10;
			if (k >= 10)
				putchar(f + '0');
			putchar(l + '0');
		}
		putchar('\n');
	}
}
