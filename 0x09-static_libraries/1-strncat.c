#include "main.h"

/**
 * *_strncat - is a funstion
 * @dest: is a varible
 * @src: is variable
 * @n: is a variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d_l = 0;

	while (dest[i++])
		d_l++;

	for (i = 0; src[i] && i < n; i++)
		dest[d_l++] = src[i];

	return (dest);
}
