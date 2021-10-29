#include <stdlib.h>

/**
 * array_range - imput
 * @min: int argument
 * @max: int argument
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *arr_range;
	int c, d = 0;

	if (min > max)
	{
		return (NULL);
	}
	arr_range = malloc(sizeof(int) * (max - min + 1));
		if (arr_range == NULL)
		{
			return (NULL);
		}
	for (c = min; c <= max; c++)
	{
		*(arr_range + d) = c;
		d++;
	}
	return (arr_range);
}
