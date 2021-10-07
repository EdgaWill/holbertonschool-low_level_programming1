#include "main.h"
/**
 * print_last_digit - printing the last digit of the number
 * @c: s an integer
 * Return: l
 */
int print_last_digit(int c)
{
	int l = c % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar('0' + l);
	return (l);
}
