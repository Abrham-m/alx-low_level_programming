#include "main.h"
#include <math.h>

/**
 * checker - is a function
 * @m: is a variable
 * @p: is a variable
 * Return: answer
 */

int checker(int m, int p)
{
	if ((p * p) == m)
		return (p);
	else if ((p * p) > m)
		return (-1);
	else
		return (checker(m, p + 1));
}

/**
 * _sqrt_recursion - is
 * @n: variable
 * Return: 0 or zero
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (checker(n, 0));
}
