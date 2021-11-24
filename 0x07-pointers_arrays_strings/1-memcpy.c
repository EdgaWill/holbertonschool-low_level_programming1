#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;
	char *va = dest;
	char *ne = src;

	while (a < n)
	{
		*va = ne[a];
		va++;
		a++;
	}
	return (dest);
}
