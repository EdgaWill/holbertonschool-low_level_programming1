#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Function that prints all natural numbers from n to 98
 * @n: do a validation
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d,", n);
			n--;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d,", n);
			n++;
		}
		printf("%d\n", n);
	}
}
