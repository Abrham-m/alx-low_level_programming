#include "main.h"

/**
 * is_prime_number - is a function
 * @n: is a variable
 * Return: a number
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3 || n == 5)
		return (1);
	else if (n % 2 == 0 || n == 1)
		return (0);
	else if (n % 3 == 0)
		return (0);
	else if (n % 5 == 0)
		return (0);
	else
		return (1);
}
