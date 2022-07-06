#include "main.h"

/**
 * jack_bauer - ;ljsjfjas
 * Return: 0
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	for (; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
				_putchar('\n');
			}
			else if (hour >= 10)
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
				_putchar('\n');
			}
			if (minute < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(minute + '0');
				_putchar('\n');
			}
			else if (minute >= 10)
			{
				_putchar(':');
				_putchar((minute / 10) + '0');
				_putchar((minute % 10) + '0');
				_putchar('\n');
			}
		}
	}
}
