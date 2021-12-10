#include <main.h>

/**
 * print_number - function that prints an integer.
 *
 * @n: int
 *
 * Return: void function
 *
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x *= -1;
		_putchar(45);
	}

	x = n;

	if (x / 10)
		print_number(x / 10);
		_putchar(x % 10 + '0');
}
