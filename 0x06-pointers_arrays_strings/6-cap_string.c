#include "main.h"

/**
 * cap_string - funtion that capitalizes all words of a string
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int a = 0, b;
	char unic[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (*(s + a))
	{
		for (b = 0; b < 13; b++)
		{
			if (a == 0 && s[a] >= 97 && s[a] <= 122)
				s[a] -= 32;
			if (s[a - 1] == unic[b])
			{
				if ((*(s + a) >= 97) &&  (*(s + a) <= 122))
					*(s + a) -= 32;
			}
		}
		a++;
	}
	return (s);
}
