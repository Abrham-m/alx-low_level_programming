#include "main.h"

/**
 * print_array- is
 * @a: is avvariable
 * @n: is seconfd varible
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c == n - 1)
			printf(" %d\n", *a);
		else if (c == 0)
			printf("%d,", *a);
		else
			printf(" %d,", *a);
		a++;
	}
}

