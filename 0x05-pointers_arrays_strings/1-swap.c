#include "main.h"

/**
 * swap_int - is a function that swaps two intergers variables
 * @a: is the first variable
 * @b: is the second variable
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
