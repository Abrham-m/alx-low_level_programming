#include "main.h"
/**
 * _strdup - is function
 * @str: pointer
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *s;
	int len;

	if (str == NULL)
		return (NULL);
	len = 0;

	while (str[len] != '\0')
		len++;
	s = malloc(sizeof(char) * (len + 1));

	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[len] = '\0';
	return (s);
}
