#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: pointer to the created matrix (Success)
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int a, b;

	if (width <= 0 || height <= 0)
	return (NULL);

	p = (int **) malloc(sizeof(int *) * height);

	if (p == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
	{
		p[a] = (int *) malloc(sizeof(int) * width);
		if (p[a] == NULL)
		{
			free(p);
			for (b = 0; b <= a; b++)
				free(p[b]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			p[a][b] = 0;
		}
	}
	return (p);
}
