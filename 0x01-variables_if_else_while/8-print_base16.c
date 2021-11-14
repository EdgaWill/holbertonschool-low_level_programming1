#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;

	int s = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (s <= 102)
	{
		putchar(s);
		s++;
	}
	putchar(10);

	return (0);
}
