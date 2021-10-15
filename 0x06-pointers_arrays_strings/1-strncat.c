#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: point
 * @src: point
 * @n: int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1;
	int s2;

	s1 = 0;

	while (dest[s1])
	{
		s1++;

	}
	s2 = 0;
	while (src[s2])
	{
		if (s2 >= n)
			break;
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	return (dest);

}
