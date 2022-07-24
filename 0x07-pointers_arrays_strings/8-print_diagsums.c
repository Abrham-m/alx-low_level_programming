#include "main.h"

/**
 * print_diagsums - is a function
 * @a: pointer
 * @size: integer
 */

void print_diagsums(int *a, int size)
{
	int i, sum, j;

	sum = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i][i];
	}
	printf("%d, ", sum);
	j = size - 1;
	sum = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[j][i];
		j--;
	}
	printf("%d", sum);
}
