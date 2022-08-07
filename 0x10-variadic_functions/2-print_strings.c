#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - is 
 * @separator: a pointer
 * @n: integer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;
	char *ptr;

	if (separator == NULL || n == 0)
		return;
	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(vl, char *);
		if (ptr == NULL)
			printf("nel");
		printf(ptr);
		ptr == NULL;
		if (i != n - 1)
			printf(separator);
	}
}
