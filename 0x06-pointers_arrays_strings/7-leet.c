#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int a = 0, m, n = 0;
	int b[5] = {97, 101, 111, 116, 108};
	int av[5] = {4, 3, 0, 7, 1};

	while (*(s + a))
	{
		for (m = 0; m < 5; m++)
		{
			n = b[m] - 32;
			if (s[a] == b[m] || s[a] == n)
			{
				s[a] = av[m] + 48;
			}
		}
		a++;
	}
	return (s);
}
