#include "main.h"
/**
 * more_numbers - function prints 10 times the numbers, from 0 to 14.
 * You can only use _putchar three times in your code
 * Return: 0
 */
void more_numbers(void)
{
	int w = 0;
	int x;
	char z = 48;
	char y = 48;

	while (w < 10)
	{
		for (x = 0; x < 15; x++)
		{
			_putchar(z);
			if (x >= 9)
			{
				z = 48;
			}
			if (x >= 10)
			{
				_putchar(y);
				y++;
			}
			z++;
		}
		_putchar(10);
		x = 0;
		z = 48;
		y = 48;
		w++;
	}
}
