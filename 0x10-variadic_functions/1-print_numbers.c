#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - is a function
 * @separator: is a pointer to char
 * @n: is an integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;

	if (separator == NULL)
		return;
	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(vl, int));
		else
			printf("%d%c", va_arg(vl, int), *separator);
	}
	va_end(vl);
}
