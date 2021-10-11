#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int a = 97;
	int b = 10;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}

	putchar(b);

	return (0);
}
