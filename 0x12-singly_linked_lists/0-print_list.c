#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_s - is
 * list_t - is
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list - is
 * @h: is apointer
 * Return: an integer
 */

size_t print_list(const list_t *h)
{
	size_t counter,i;

	counter = 0;
	if (h == NULL)
		return (0);
	for (i = 0; i < 4; i++)
	{
		counter++;
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%i] %s",h->len,h->str);
		printf("\n");
		if(h->next == NULL)
			break;
		h = h->next;
	}
	return (counter);
}
