#include <stdio.h>
/**
 * main - is the main function
 * Return: 0
 */

int main(void)
{
	char a[8];
	char *c;

	a[8] = "_putchar";

	c = a;

	while (*c != '\0')
	{
		putchar(*c);
		c++;
	}
	putchar('\n');
	return (0);



}
