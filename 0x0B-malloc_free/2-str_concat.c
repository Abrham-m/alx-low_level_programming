#include "main.h"

/**
 * alloc_grid -
 * @width: o
 * @height: p
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	if ( width <= 0 || height <= 0)
		return (NULL);
	
	int *a;
	int b[height][width];
	int x,j,i;

	a = malloc(sizeof(*a) * (height * width));
	x = 0;
	for (i = 0; i < height - 1; i++)
	{
		for(j = 0; j < width - 1; j++)
		{
			a[x] = b[i][j] = 0;
			x++;
		}
	}
	return (b);
}
