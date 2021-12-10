#include<stdio.h>
/**
 * main -  program that prints exactly
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char er[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(er, 59, 1, stderr);
	return (1);
}
