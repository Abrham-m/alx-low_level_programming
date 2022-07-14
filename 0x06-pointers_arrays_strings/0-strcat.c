#include "main.h"

/**
 * _strcat -  is a function that append src
 * @dest: is a pointer
 * @src: is a pointer
 * Return: 0 e return dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
