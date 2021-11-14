#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int b = 122;

	while (b >= 97)
	{
		putchar(b);
		b--;
	}
	putchar(10);

	return (0);
}
