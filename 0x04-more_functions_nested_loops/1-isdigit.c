#include "main.h"
/**
 * _isdigit - find a digit (0 to 9)
 * @c: return a digit
 * Return: c
 */
int _isdigit(int c)
{
	int d = c;

	if (d >= 48 && d <= 57)
		return (1);
	return (0);

}
