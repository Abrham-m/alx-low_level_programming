#include "main.h"
#include <string.h>
/**
 * *_memset - is
 * @s: pointer
 * @b: character
 * @n: size of integer
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
