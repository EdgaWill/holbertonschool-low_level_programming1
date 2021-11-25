#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: char
 *
 * Return: n string
 */
int _atoi(char *s)
{
	int a, b, c, d, f, e;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[d] != 0)
		d++;

	while (a < d && f == 0)
	{
		if (s[a] == '-')
		++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			e = s[a] - '0';
			if (b % 2)
				e = -e;
			c = c * 10 + e;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);
	return (c);
}
