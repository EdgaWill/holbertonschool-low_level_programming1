#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the value of x raised to the power
 * @x: Recursion
 * @y: Recursion
 * Return: res
 */
int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	res = x * _pow_recursion(x, y - 1);

	return (res);
}
