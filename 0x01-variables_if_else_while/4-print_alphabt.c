#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a != 101 && a != 113)
		{
			putchar (a);
		}
		a++;
	}
	putchar (10);

	return (0);
}
