#include "main.h"

/**
 * main - test function that prints if integer
 * Return: 0
 * positive_or_negative(int i) - djfs
 */

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);

}

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}


}
