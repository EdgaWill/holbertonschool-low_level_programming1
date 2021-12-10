#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
	char i[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(i, 59, 1, stderr);
	return (1);
}
