#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: pointer
 */
void print_rev(char *s)
{
	int p = 0;
	int q;

	while (*s != '\0')
	{
		p++;
		s++;
	}
	s--;
	for (q = 0; q < p; q++)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
