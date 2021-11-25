#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: point char
 */
void rev_string(char *s)
{
	char a;
	int b, c, d;

	b = 0;
	c = 0;

	while (s[b] != 0)
	{
		b++;
	}
	c = b - 1;
	for (d = 0; d < b / 2; d++)
	{
		a = s[d];
		s[d] = s[c];
		s[c--] = a;
	}
}
