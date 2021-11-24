#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: point char
 * @accept: point char
 * Return:  c
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b = 0;
	unsigned int c = 0;

	while (((s[a] > 96) && (s[a] < 123)) || ((s[a] > 64) && (s[a] < 91)))
	{
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		b = 0;
		a++;
	}
	return (c);
}
