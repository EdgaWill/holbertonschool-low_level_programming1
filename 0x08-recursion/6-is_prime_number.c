#include "main.h"
/**
 * to_prime - the loop and part of the function in use
 * @n: int
 * @i: int
 * Return: int
 */
int to_prime(int n, int i)
{
	if (n != i && n % i == 0)
	{
		return (0);
	}
	if (n == i && n % 1 == 0)
	{
		return (1);
	}
	else
	{
		return (to_prime(n, i + 1));
	}
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (to_prime(n, 2));
	}
}
