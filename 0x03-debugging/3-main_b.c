#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are
 * Return: void
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 29;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	prin_remaining_days(monh, day, year);

	return (0);
}
