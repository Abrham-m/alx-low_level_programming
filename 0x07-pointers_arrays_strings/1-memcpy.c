#include "main.h"

/**
 * *_memcpy - is
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
