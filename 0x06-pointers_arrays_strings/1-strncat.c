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
	/**
	 * n = 2
	 * dest = hello
	 * src = wold
	 */
	while (src[s2])
	{
		dest[s1] = src[s2];/*dest[7] src[0], dest=hello W*/
		s1++;
		s2++;
			if (src[2] > n)
			break;
	}
	return (dest);

}
