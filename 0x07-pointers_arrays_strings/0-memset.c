#include "main.h"

/**
 * *_memset - is 
 * @s:
 * @b:
 * @n:
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
