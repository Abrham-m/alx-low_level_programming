#include "main.h"
#include <ctype.h>

/**
 * _islower - checks its lowercase letter
 * @c: is a parameter
 * Return: 1 - if it is lowercase
 */

int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
