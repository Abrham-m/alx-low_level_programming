#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - is a function
 * @array: is
 * @size: is
 * @action: is
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
