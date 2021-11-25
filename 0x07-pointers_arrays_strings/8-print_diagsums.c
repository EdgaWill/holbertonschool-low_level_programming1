#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: point int
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int d, e = 0, f = 0, g;

	g = size * size;
	for (d = 0; d < g; d++)
	{
		if (d % (size + 1) == 0)
		e += *(a + d);
		if (d % (size - 1) == 0 && d != 0 && d != (g - 1))
		f += *(a + d);
	}
	printf("%d, %d\n", e, f);
}
