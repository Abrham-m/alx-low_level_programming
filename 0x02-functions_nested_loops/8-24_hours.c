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
			printf("%02d:%02d\n", hour, minute);
	}
}
