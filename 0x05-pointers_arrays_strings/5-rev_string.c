#include "main.h"

/**
 * rev_string- is
 * @s: is varible
 */

void rev_string(char *s)
{
	int i;
	int temp;
	int len;

	len = strlen(s);

	for (i = 0; i <	len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}	
