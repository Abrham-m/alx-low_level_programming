#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - is a function that
 * @n: a variable integer
 * Return: sum of a parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list vl;

	if (n == 0)
		return (0);
	va_start(vl, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(vl, int);
	}
	return (sum);
}
