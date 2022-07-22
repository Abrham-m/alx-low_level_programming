#include "main.h"

/**
 * factorial -  is a function that returns factorial
 * @n: is a variable
 * Return: 1 or -1 or result
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
