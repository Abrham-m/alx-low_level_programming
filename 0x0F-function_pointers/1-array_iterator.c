#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - is a function
 * @array: is
 * @size: is
 * @action:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
