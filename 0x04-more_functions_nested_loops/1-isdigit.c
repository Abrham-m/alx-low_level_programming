#include "main.h"

/**
 * _isdigit - is afunction that check if it is digit or not
 * @c: is input character
 * Return: 1 if it is a digit or 0 if it is not
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
