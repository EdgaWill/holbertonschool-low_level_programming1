#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer
 * @b: char
 * @n: int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;
	char *ptr = s;

	while (a < n)
	{
		*ptr = b;
		a++;
		ptr++;
	}
	return (s);
}
