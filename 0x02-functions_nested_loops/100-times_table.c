#include "main.h"
/**
 * print_times_table - function that prints the n times table
 * starting with 0
 * @n: number int
 */
void print_times_table(int n)
{
	int abc, def, re;

	if (n <= 15 && n >= 0)
	{
		for (abc = 0; abc <= n; abc++)
		{
			_putchar('0');
			for (def = 1; def <= n; def++)
			{
				re = abc * def;
				_putchar(',');
				_putchar(' ');
				if (re <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(re + '0');
				}
				else if (re <= 99)
				{
					_putchar(' ');
					_putchar(re / 10 + '0');
					_putchar(re % 10 + '0');
				}
				else
				{
					_putchar(re / 100 + '0');
					_putchar((re % 100) / 10 + '0');
					_putchar(re % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
