#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int b = 48;

	while (b <= 57)
	{
		putchar(b);
		b++;
	}
	putchar(10);

	return (0);
}
