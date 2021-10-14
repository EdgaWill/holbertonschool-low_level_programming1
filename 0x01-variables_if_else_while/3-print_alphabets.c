#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	int a = 97;
	int b = 65;
	int c = 10;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar (b);
		b++;
	}

	putchar(c);

	return (0);


}
