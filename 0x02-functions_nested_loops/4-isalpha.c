#include "main.h"
/**
 * _isalpha - alphabetic character
 * @c: return an integer
 * Return: c
 */
int _isalpha(int c)
{
	int d = c;

	if (d >= 65 && d <= 90)
		return (1);
	else if (d >= 97 && d <= 122)
		return (1);
	return (0);

}
