#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
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
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	dest[s1] = '\0';
	return (dest);

}
