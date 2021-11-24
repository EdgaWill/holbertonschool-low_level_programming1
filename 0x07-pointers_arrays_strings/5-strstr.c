#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: char pointer
 * @needle: char pointer
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a, b, c, d;

	if (*needle == '\0')
		return (haystack);
	for (a = 0; *(haystack + a); a++)
	{
		d  = 0;
		b = a;
		for (c = 0; *(needle + c) && (haystack + b); c++)
		{
			if (*(haystack + b) == *(needle + c))
				d = 1;
			else
				break;
			b++;
		}
		if (d == 1 && *(needle + c) == '\0')
			return (haystack + a);
	}
	return (0);
}
