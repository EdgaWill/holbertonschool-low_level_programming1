#include "main.h"
/**
 * _islower - check lowercase character
 * @c: is an integer
 * Return: c
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
