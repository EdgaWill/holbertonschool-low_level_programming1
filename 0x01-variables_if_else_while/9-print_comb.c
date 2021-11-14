#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = '0';

	int d = 1;

	while (i <= '9')
	{
		if (d == 0)
		{
			putchar(',');
			putchar(' ');
		}
		d = 0;
		putchar(i);
		i++;
	}
	putchar (10);

	return (0);
}
