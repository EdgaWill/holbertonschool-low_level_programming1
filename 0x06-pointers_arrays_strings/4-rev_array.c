#include <stdio.h>
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: int
 *
 */
void reverse_array(int *a, int n)
{
	int x;
	int y = 0;
	int z = n - 1;

	while (y < z)
	{
		x = a[y];
		a[y] = a[z];
		a[z] = x;
		y++;
		z--;
	}
}
