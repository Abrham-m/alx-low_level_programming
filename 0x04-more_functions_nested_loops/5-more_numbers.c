#include "main.h"

/**
 * more_numbers - Entry point
 * Return: no return
 */
void more_numbers(void)
{
	int i, k;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k <= 9)
			putchar(k + '0');
			else
			{
				putchar(k / 10 + '0');
				putchar(k % 10 + '0');
			}
		}
		putchar('\n');
	}
}
