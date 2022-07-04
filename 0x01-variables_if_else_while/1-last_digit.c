#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints sizes of characters
 * Return: Always 0 (success)
 */

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	int Last_digit;

	Last_digit = n % 10;

	if (Last_digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, Last_digit);
	}
	else if (Last_digit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, Last_digit);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n,
			Last_digit);
	}
	return (0);
}
