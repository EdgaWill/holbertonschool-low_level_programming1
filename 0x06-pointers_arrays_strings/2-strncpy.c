#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: point
 * @src: point
 * @n: int
 * Return : dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	for (x = 0; (x < n) && (src[x] != '\0'); x++)
	{
		dest[x] = src[x];
	}
	for (; x < n ; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
