#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: int
 */
void print_diagonal(int n)
{
	int i;
	int a = n - 1;

	if (n > 0)
	{
		while (n--)
		{
			for (i = n; i < a; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
