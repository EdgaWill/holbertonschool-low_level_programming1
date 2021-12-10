#include "main.h"
#include <stdio.h>

/**
 * *infinite_add - adds two numbers
 *
 * @n1: number
 * @n2: number
 * @r: buffer
 * @size_r: size of buffer
 *
 * Return: pointer to buffer r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l, i = 0, j = 0, m, num1, num2, num = 0;

	while (n1[i] != '\0')
	i++;
	while (n2[j] != '\0')
	i++;

	l = (i > j) ? i : j;

	if (l + 1 > size_r)
	return (0);
	r[l] = '\0';
	for (m = l - 1; m >= 0; m--)
	{
		i--;
		j--;
		num1 = (i >= 0) ? n1[i] - '0' : 0;
		num2 = (j >= 0) ? n2[j] - '0' : 0;

		r[m] = (num1 + num2 + num) % 10 + '0';
		num = (num1 + num2 + num) / 10;
	}
	if (num == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = num + '0';
	}
	return (r);
}
