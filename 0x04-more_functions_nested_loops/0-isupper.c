#include "main.h"
/**
 * _isupper - look for uppercase characters
 * @c: return an integer
 * Return: c
 */
int _isupper(int c)
{
	int d = c;

	if (d >= 65 && d <= 90)
		return (1);
	else if (d >= 97 && d <= 122)
		return (0);
	return (0);

}
