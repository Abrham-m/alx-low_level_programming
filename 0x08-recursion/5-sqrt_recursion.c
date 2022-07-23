#include "main.h"

/**
 * _sqrt_recursion - is a function that returns radican answers
 * @n: is a number
 * Return: 0 or the answer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt(n));
}
