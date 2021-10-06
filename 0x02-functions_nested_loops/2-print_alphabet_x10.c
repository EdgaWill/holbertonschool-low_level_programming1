#include "main.h"
/**
 * print_alphabet_x10 - function to print the alphabetx10
 */
void print_alphabet_x10(void)
{
	int l = 97;
	int n = 0;

	while (n < 10)
{
	while (l <= 122)
	{
	_putchar(l);
	l = l + 1;
	}
	l = 97;
	_putchar(10);
	n++;
}
}
